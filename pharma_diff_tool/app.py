from flask import Flask, render_template, request
import os
import difflib
import tempfile
import nltk
from docx import Document
import PyPDF2

# Initialize Flask app
app = Flask(__name__)

# Download required NLTK resources
try:
    nltk.download('wordnet', quiet=True)
    nltk.download('omw-1.4', quiet=True)
    nltk.download('punkt', quiet=True)
    from nltk.corpus import wordnet
except Exception as e:
    print(f"NLTK download failed: {e}")

# Load spaCy
try:
    import spacy
    nlp = spacy.load("en_core_web_md")  # or "en_core_web_lg" for better accuracy
    SPACY_AVAILABLE = True
except:
    SPACY_AVAILABLE = False
    print("spaCy not available. Using WordNet only.")

def get_wordnet_synonyms(word):
    """Get all synonyms for a word using WordNet."""
    synsets = wordnet.synsets(word)
    synonyms = set()
    # Get synonyms from all synsets
    for syn in synsets:
        for lemma in syn.lemmas():
            synonyms.add(lemma.name().lower())
        # Also include hypernyms and hyponyms for better matching
        for hypernym in syn.hypernyms():
            for lemma in hypernym.lemmas():
                synonyms.add(lemma.name().lower())
        for hyponym in syn.hyponyms():
            for lemma in hyponym.lemmas():
                synonyms.add(lemma.name().lower())
    return synonyms

def are_synonyms(word1, word2, spacy_threshold=0.80):
    """Check if two words are synonyms using both WordNet and spaCy."""
    # Clean and lowercase the words
    w1 = word1.lower().strip()
    w2 = word2.lower().strip()

    # Skip empty strings or identical words
    if not w1 or not w2 or w1 == w2:
        return True

    # Check WordNet synonyms
    syns1 = get_wordnet_synonyms(w1)
    if w2 in syns1:
        return True
    
    syns2 = get_wordnet_synonyms(w2)
    if w1 in syns2 or syns1.intersection(syns2):
        return True

    # Use spaCy's semantic similarity as a backup
    if SPACY_AVAILABLE:
        try:
            doc1 = nlp(w1)
            doc2 = nlp(w2)
            if doc1.vector_norm and doc2.vector_norm:
                similarity = doc1.similarity(doc2)
                return similarity >= spacy_threshold
        except Exception:
            pass

    return False

def extract_text_from_docx(path):
    """Extracts all text from a DOCX file."""
    try:
        doc = Document(path)
        return '\n'.join([para.text for para in doc.paragraphs if para.text.strip()])
    except Exception as e:
        raise Exception(f"Error reading DOCX file: {str(e)}")

def extract_text_from_pdf(path):
    """Extracts all text from a PDF file."""
    try:
        with open(path, 'rb') as f:
            reader = PyPDF2.PdfReader(f)
            text = []
            for page in reader.pages:
                text.append(page.extract_text() or "")
        return '\n'.join(text)
    except Exception as e:
        raise Exception(f"Error reading PDF file: {str(e)}")

def extract_text_from_txt(path):
    """Extracts all text from a TXT file."""
    try:
        with open(path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        raise Exception(f"Error reading TXT file: {str(e)}")

def extract_text_from_any(path, ext):
    """Extracts text based on file extension."""
    if ext == '.docx':
        return extract_text_from_docx(path)
    elif ext == '.pdf':
        return extract_text_from_pdf(path)
    elif ext == '.txt':
        return extract_text_from_txt(path)
    else:
        raise Exception("Unsupported file type.")

def compute_semantic_diff(text1, text2):
    """
    Compute differences while treating synonyms as equal.
    Compares by lines first, then by words within changed lines.
    If the first word of two lines are synonyms and the rest is similar, treat as equal.
    """
    lines1 = [line.strip() for line in text1.splitlines() if line.strip()]
    lines2 = [line.strip() for line in text2.splitlines() if line.strip()]

    seqm = difflib.SequenceMatcher(None, lines1, lines2)
    diff_result = []

    for tag, i1, i2, j1, j2 in seqm.get_opcodes():
        if tag == 'equal':
            continue
        elif tag == 'replace':
            l1 = lines1[i1:i2]
            l2 = lines2[j1:j2]
            # Try to match lines by position
            for sub_l1, sub_l2 in zip(l1, l2):
                words1 = [w.strip('.,;()[]{}*:-_') for w in sub_l1.split()]
                words2 = [w.strip('.,;()[]{}*:-_') for w in sub_l2.split()]
                if words1 and words2:
                    # If first words are synonyms, compare the rest
                    if are_synonyms(words1[0], words2[0]):
                        rest1 = words1[1:]
                        rest2 = words2[1:]
                        if len(rest1) == len(rest2):
                            if all(are_synonyms(a, b) for a, b in zip(rest1, rest2)):
                                continue  # treat as equal
                    # If all words are synonyms
                    if len(words1) == len(words2):
                        if all(are_synonyms(a, b) for a, b in zip(words1, words2)):
                            continue
                diff_result.append(f"🔁 {sub_l1} → {sub_l2}")
            # Handle extra lines
            if len(l1) > len(l2):
                for sub_l1 in l1[len(l2):]:
                    diff_result.append(f"❌ Removed: {sub_l1}")
            if len(l2) > len(l1):
                for sub_l2 in l2[len(l1):]:
                    diff_result.append(f"🆕 Added: {sub_l2}")
        elif tag == 'delete':
            for sub_l1 in lines1[i1:i2]:
                diff_result.append(f"❌ Removed: {sub_l1}")
        elif tag == 'insert':
            for sub_l2 in lines2[j1:j2]:
                diff_result.append(f"🆕 Added: {sub_l2}")

    if not diff_result:
        diff_result.append("✅ No meaningful differences found (synonyms are treated as equal)")

    return diff_result

# --- Flask Routes ---

@app.route('/', methods=['GET', 'POST'])
def index():
    file1_text = ''
    file2_text = ''
    diff_result = []
    error_message = ''

    if request.method == 'POST':
        file1 = request.files.get('file1')
        file2 = request.files.get('file2')

        if file1 and file2:
            try:
                allowed_exts = ['.docx', '.pdf', '.txt']
                ext1 = os.path.splitext(file1.filename)[1].lower()
                ext2 = os.path.splitext(file2.filename)[1].lower()
                if not (ext1 in allowed_exts and ext2 in allowed_exts):
                    error_message = "Please upload only DOCX, PDF, or TXT files."
                    return render_template('pdftool.html', file1_text=file1_text, file2_text=file2_text,
                                           diff_result=diff_result, error_message=error_message)

                temp1_path = temp2_path = None

                try:
                    temp1_fd, temp1_path = tempfile.mkstemp(suffix=ext1)
                    temp2_fd, temp2_path = tempfile.mkstemp(suffix=ext2)

                    with os.fdopen(temp1_fd, 'wb') as tmp1:
                        file1.seek(0)
                        tmp1.write(file1.read())

                    with os.fdopen(temp2_fd, 'wb') as tmp2:
                        file2.seek(0)
                        tmp2.write(file2.read())

                    file1_text = extract_text_from_any(temp1_path, ext1)
                    file2_text = extract_text_from_any(temp2_path, ext2)

                    diff_result = compute_semantic_diff(file1_text, file2_text)

                finally:
                    if temp1_path and os.path.exists(temp1_path):
                        os.unlink(temp1_path)
                    if temp2_path and os.path.exists(temp2_path):
                        os.unlink(temp2_path)

            except Exception as e:
                error_message = f"Error processing files: {str(e)}"
        else:
            error_message = "Please upload two files."

    return render_template('pdftool.html', file1_text=file1_text, file2_text=file2_text,
                           diff_result=diff_result, error_message=error_message)

# --- App Start ---
if __name__ == '__main__':
    app.run(debug=True)
