// 1. local literature service code
 
 // JavaScript for form submission and smooth scrolling
    document.addEventListener('DOMContentLoaded', () => {
      // Smooth scrolling for navigation links
      document.querySelectorAll('a[href^="#"]').forEach(anchor => {
        anchor.addEventListener('click', (e) => {
          e.preventDefault();
          const target = document.querySelector(anchor.getAttribute('href'));
          target.scrollIntoView({ behavior: 'smooth' });
        });
      });

      // Form submission simulation
      const submitBtn = document.getElementById('submit-btn');
      const formMessage = document.getElementById('form-message');
      const formContainer = document.getElementById('form-container');

      submitBtn.addEventListener('click', () => {
        const name = document.getElementById('name').value;
        const email = document.getElementById('email').value;
        const message = document.getElementById('message').value;

        if (name && email && message) {
          formContainer.classList.add('hidden');
          formMessage.classList.remove('hidden');
          setTimeout(() => {
            formContainer.classList.remove('hidden');
            formMessage.classList.add('hidden');
            document.getElementById('name').value = '';
            document.getElementById('email').value = '';
            document.getElementById('message').value = '';
          }, 2000);
        } else {
          alert('Please fill out all fields.');
        }
      });
    });