// Custom JavaScript for abt.html can be added here.
// No inline JS was present in the HTML, so this file is ready for your scripts

// Smooth scroll to top functionality for the scroll-to-top button
const scrollToTopBtn = document.querySelector('.scroll-to-top');
if (scrollToTopBtn) {
    scrollToTopBtn.addEventListener('click', function() {
        window.scrollTo({ top: 0, behavior: 'smooth' });
    });
    // Show/hide button on scroll
    window.addEventListener('scroll', function() {
        if (window.scrollY > 200) {
            scrollToTopBtn.style.display = 'block';
        } else {
            scrollToTopBtn.style.display = 'none';
        }
    });
}

// Mobile menu toggler
const mobileNavToggler = document.querySelector('.mobile-nav-toggler');
const mobileMenu = document.querySelector('.mobile-menu');
const menuBackdrop = document.querySelector('.menu-backdrop');
const closeBtn = document.querySelector('.close-btn');
if (mobileNavToggler && mobileMenu && menuBackdrop && closeBtn) {
    mobileNavToggler.addEventListener('click', function() {
        mobileMenu.classList.add('active');
    });
    closeBtn.addEventListener('click', function() {
        mobileMenu.classList.remove('active');
    });
    menuBackdrop.addEventListener('click', function() {
        mobileMenu.classList.remove('active');
    });
}

// Sticky header on scroll
const header = document.querySelector('.main-header');
const stickyHeader = document.querySelector('.sticky-header');
window.addEventListener('scroll', function() {
    if (window.scrollY > 100) {
        if (stickyHeader) stickyHeader.classList.add('fixed-header');
    } else {
        if (stickyHeader) stickyHeader.classList.remove('fixed-header');
    }
});

// abt.js - Custom scripts for Sojar homepage

document.addEventListener('DOMContentLoaded', function() {
  // Simple slider logic
  const slides = document.querySelectorAll('.slide');
  const dots = document.querySelectorAll('.slider-dot');
  let current = 0;
  let timer;

  function showSlide(idx) {
    slides.forEach((slide, i) => {
      slide.classList.toggle('active', i === idx);
      dots[i].classList.toggle('active', i === idx);
    });
    current = idx;
  }

  function nextSlide() {
    let next = (current + 1) % slides.length;
    showSlide(next);
  }

  function startSlider() {
    timer = setInterval(nextSlide, 5000);
  }
  function stopSlider() {
    clearInterval(timer);
  }

  dots.forEach((dot, i) => {
    dot.addEventListener('click', () => {
      showSlide(i);
      stopSlider();
      startSlider();
    });
  });

  showSlide(0);
  startSlider();

  // Toggle About Sojar section
  const aboutSojarLink = document.getElementById('about-sojar-link');
  const aboutSojarSection = document.getElementById('about-sojar-section');
  const mainContainer = document.querySelector('.container');

  if (aboutSojarLink && aboutSojarSection && mainContainer) {
    aboutSojarLink.addEventListener('click', function(e) {
      e.preventDefault();
      const sidebar = document.querySelector('.sidebar-nav');
      if (sidebar) sidebar.style.display = 'none';
      mainContainer.style.display = 'none';
      aboutSojarSection.style.display = 'block';
      aboutSojarSection.style.position = 'fixed';
      aboutSojarSection.style.top = '0';
      aboutSojarSection.style.left = '0';
      aboutSojarSection.style.width = '100vw';
      aboutSojarSection.style.height = '100vh';
      aboutSojarSection.style.background = '#22506a';
      aboutSojarSection.style.overflowY = 'auto';
      aboutSojarSection.style.zIndex = '9999';
      sojarParallaxInit();
    });
    // Back button logic
    const backBtn = document.getElementById('back-to-main');
    if (backBtn) {
      backBtn.addEventListener('click', function() {
        const sidebar = document.querySelector('.sidebar-nav');
        if (sidebar) sidebar.style.display = '';
        mainContainer.style.display = '';
        aboutSojarSection.style.display = 'none';
        // Reset About Sojar section styles
        aboutSojarSection.style.position = '';
        aboutSojarSection.style.top = '';
        aboutSojarSection.style.left = '';
        aboutSojarSection.style.width = '';
        aboutSojarSection.style.height = '';
        aboutSojarSection.style.background = '';
        aboutSojarSection.style.overflowY = '';
        aboutSojarSection.style.zIndex = '';
      });
    }
  }

  // Parallax effect for About Sojar images
  function sojarParallaxInit() {
    var section = document.getElementById('about-sojar-section');
    if (!section) return;
    var container = section.querySelector('.images-outer');
    if (!container) return;
    var images = container.querySelectorAll('[data-depth]');
    function parallax(e) {
      var rect = container.getBoundingClientRect();
      var x = (e.clientX - rect.left) / rect.width - 0.5;
      var y = (e.clientY - rect.top) / rect.height - 0.5;
      images.forEach(function(img) {
        var depth = parseFloat(img.getAttribute('data-depth')) || 0.1;
        var moveX = -x * 30 * depth;
        var moveY = -y * 10 * depth;
        img.style.transform = 'translate3d(' + moveX + 'px, ' + moveY + 'px, 0)';
      });
    }
    container.addEventListener('mousemove', parallax);
    container.addEventListener('mouseleave', function() {
      images.forEach(function(img) {
        img.style.transform = '';
      });
    });
  }

  // Hide topline on scroll for About Sojar overlay
  (function() {
    var aboutSection = document.getElementById('about-sojar-section');
    if (!aboutSection) return;
    var lastScroll = 0;
    aboutSection.addEventListener('scroll', function() {
      if (aboutSection.scrollTop > 10) {
        aboutSection.classList.add('scrolled');
      } else {
        aboutSection.classList.remove('scrolled');
      }
    });
    // For overlays that use window scroll
    window.addEventListener('scroll', function() {
      if (aboutSection.style.display !== 'none') {
        if (window.scrollY > 10) {
          aboutSection.classList.add('scrolled');
        } else {
          aboutSection.classList.remove('scrolled');
        }
      }
    });
  })();

  // Animate numbers in feature-block-three when section is visible
  function animateSojarStats() {
    var blocks = document.querySelectorAll('.feature-block-three .number');
    blocks.forEach(function(block) {
      var target = parseInt(block.textContent.replace(/\D/g, ''));
      if (!target || block.dataset.animated) return;
      block.dataset.animated = 'true';
      var current = 0;
      var increment = Math.ceil(target / 60);
      var interval = setInterval(function() {
        current += increment;
        if (current >= target) {
          block.textContent = target;
          clearInterval(interval);
        } else {
          block.textContent = current;
        }
      }, 18);
    });
  }
  // Trigger animation when the section scrolls into view
  function handleSojarStatsScroll() {
    var section = document.querySelector('.inner-column .sec-title.light');
    if (!section) return;
    var rect = section.getBoundingClientRect();
    if (rect.top < window.innerHeight && rect.bottom > 0) {
      animateSojarStats();
      window.removeEventListener('scroll', handleSojarStatsScroll);
    }
  }
  window.addEventListener('scroll', handleSojarStatsScroll);

  // Technology & Engagements Carousel JS
  $(document).ready(function() {
    // Engagements Carousel
    if ($('.engagements-carousel').length && typeof $.fn.owlCarousel === 'function') {
      $('.engagements-carousel').owlCarousel({
        items: 1,
        loop: true,
        nav: true,
        dots: true,
        autoplay: true,
        autoplayTimeout: 5000,
        smartSpeed: 900,
        navText: ['<i class="fa fa-angle-left"></i>', '<i class="fa fa-angle-right"></i>'],
        responsive: {
          0: { items: 1 },
          600: { items: 1 },
          900: { items: 2 },
          1200: { items: 3 }
        }
      });
    }
  });
});
