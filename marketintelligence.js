// Modern interactive enhancements for Market Intelligence page

document.addEventListener('DOMContentLoaded', function() {
    // Animate service cards on scroll
    const serviceBoxes = document.querySelectorAll('.service-box');
    const observer = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.classList.add('in-view');
            }
        });
    }, { threshold: 0.15 });
    serviceBoxes.forEach(box => {
        observer.observe(box);
    });

    // Smooth scroll for Enquire Now button (if using anchor)
    const enquireBtn = document.querySelector('.theme-btn, .btn-style-one');
    if (enquireBtn && enquireBtn.getAttribute('href') && enquireBtn.getAttribute('href').startsWith('#')) {
        enquireBtn.addEventListener('click', function(e) {
            const targetId = this.getAttribute('href').substring(1);
            const target = document.getElementById(targetId);
            if (target) {
                e.preventDefault();
                target.scrollIntoView({ behavior: 'smooth' });
            }
        });
    }
});
