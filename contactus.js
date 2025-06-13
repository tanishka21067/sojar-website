// contactus.js - Simple form validation and AJAX (optional)
document.addEventListener('DOMContentLoaded', function() {
    const form = document.getElementById('contactForm');
    const formMessage = document.getElementById('formMessage');
    if (!form) return;
    form.addEventListener('submit', function(e) {
        e.preventDefault();
        formMessage.textContent = '';
        // Simple validation
        const name = form.name.value.trim();
        const email = form.email.value.trim();
        const phone = form.phone.value.trim();
        const subject = form.subject.value.trim();
        const message = form.message.value.trim();
        if (!name || !email || !phone || !subject || !message) {
            formMessage.textContent = 'Please fill in all fields.';
            formMessage.style.color = '#E53935';
            return;
        }
        // Optionally, send via AJAX (example only, backend required)
        
        fetch('emailsend.php', {
            method: 'POST',
            body: new FormData(form)
        })
        .then(res => res.text())
        .then(data => {
            formMessage.textContent = 'Thank you for contacting us!';
            formMessage.style.color = '#16B6B0';
            form.reset();
        })
        .catch(() => {
            formMessage.textContent = 'There was an error. Please try again later.';
            formMessage.style.color = '#E53935';
        });
        
        // For demo, just show success
        formMessage.textContent = 'Thank you for contacting us!';
        formMessage.style.color = '#16B6B0';
        form.reset();
    });
    
});
