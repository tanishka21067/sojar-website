// Career Page Custom JS
// Fade in the highlight section on scroll (if needed for future expansion)
document.addEventListener('DOMContentLoaded', function() {
  var highlight = document.querySelector('.career-highlight-section');
  if (highlight) {
    highlight.style.opacity = 0;
    highlight.style.transition = 'opacity 0.8s';
    function fadeInCareerSection() {
      var rect = highlight.getBoundingClientRect();
      if (rect.top < window.innerHeight - 60) {
        highlight.style.opacity = 1;
        window.removeEventListener('scroll', fadeInCareerSection);
      }
    }
    fadeInCareerSection();
    window.addEventListener('scroll', fadeInCareerSection);
  }
});
// End Career Page Custom JS
