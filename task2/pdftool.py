from fastapi import FastAPI, File, UploadFile
from fastapi.responses import JSONResponse
import pdfplumber
from sentence_transformers import SentenceTransformer, util
import numpy as np
import aiofiles

app = FastAPI()

# Load Sentence-BERT model
model = SentenceTransformer('all-MiniLM-L6-v2')

async def extract_text_from_pdf(file_path: str) -> str:
    text = ""
    with pdfplumber.open(file_path) as pdf:
        for page in pdf.pages:
            text += page.extract_text() or ""
    return text

@app.post("/compare-documents/")
async def compare_documents(file1: UploadFile = File(...), file2: UploadFile = File(...)):
    try:
        # Save uploaded PDFs temporarily
        async with aiofiles.open("temp1.pdf", "wb") as f1:
            await f1.write(await file1.read())
        async with aiofiles.open("temp2.pdf", "wb") as f2:
            await f2.write(await file2.read())

        # Extract text from PDFs
        text1 = await extract_text_from_pdf("temp1.pdf")
        text2 = await extract_text_from_pdf("temp2.pdf")

        # Encode texts to embeddings
        embeddings1 = model.encode(text1, convert_to_tensor=True)
        embeddings2 = model.encode(text2, convert_to_tensor=True)

        # Compute cosine similarity
        similarity = util.cos_sim(embeddings1, embeddings2).item()

        return JSONResponse(content={"similarity_score": float(similarity)})
    except Exception as e:
        return JSONResponse(content={"error": str(e)}, status_code=500)

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)