// Contact Form Captcha
let captchaResult;

function generateCaptcha() {
    const num1 = Math.floor(Math.random() * 10);
    const num2 = Math.floor(Math.random() * 10);
    const $generated = $('.submit__generated');
    $generated.html(`<span>${num1}</span> + <span>${num2}</span> = <input class="submit__input" type="text" maxlength="2" size="2" required>`);
    return num1 + num2;
}

$(document).ready(function() {
    // Initialize WOW.js
    new WOW().init();

    // Initialize captcha
    captchaResult = generateCaptcha();

    // Refresh captcha
    $('.fa-refresh').click(function() {
        captchaResult = generateCaptcha();
    });

    // Form validation with visual feedback
    $('#form1').on('submit', function(e) {
        e.preventDefault();
        let isValid = true;
        const form = $(this);
        
        // Clear previous error states
        form.find('.error').removeClass('error');
        $('.submit__error, .submit__error--empty').addClass('hide');
        
        // Validate required fields
        form.find('input[required]').each(function() {
            if (!$(this).val().trim()) {
                isValid = false;
                $(this).addClass('error');
            }
        });

        // Validate email
        const email = form.find('input[name="email"]').val();
        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        if (!emailRegex.test(email)) {
            isValid = false;
            form.find('input[name="email"]').addClass('error');
        }

        // Validate phone number
        const phone = form.find('input[name="phone"]').val();
        if (phone && !/^\d{10,15}$/.test(phone)) {
            isValid = false;
            form.find('input[name="phone"]').addClass('error');
        }

        // Validate captcha
        const userAnswer = parseInt($('.submit__input').val());
        if (isNaN(userAnswer)) {
            $('.submit__error--empty').removeClass('hide');
            isValid = false;
        } else if (userAnswer !== captchaResult) {
            $('.submit__error').removeClass('hide');
            isValid = false;
        }

        if (!isValid) {
            return false;
        }

        // Form is valid, prepare for submission
        const formData = new FormData(this);
        
        // Show loading state
        const submitBtn = $('#submit');
        const originalText = submitBtn.val();
        submitBtn.prop('disabled', true).val('Sending...');

        // Add visual feedback for form submission
        form.addClass('submitting');

        // Simulate form submission (replace with actual API call)
        setTimeout(() => {
            form.removeClass('submitting');
            alert('Thank you for your message! We will get back to you soon.');
            form[0].reset();
            submitBtn.prop('disabled', false).val(originalText);
            captchaResult = generateCaptcha();
        }, 1500);
    });

    // Add input event listeners for real-time validation
    $('input[required]').on('input', function() {
        if ($(this).val().trim()) {
            $(this).removeClass('error');
        }
    });

    // Real-time email validation
    $('input[name="email"]').on('input', function() {
        const email = $(this).val();
        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        if (emailRegex.test(email)) {
            $(this).removeClass('error');
        }
    });

    // Real-time phone validation
    $('input[name="phone"]').on('input', function() {
        const phone = $(this).val();
        if (/^\d{10,15}$/.test(phone)) {
            $(this).removeClass('error');
        }
    });

    // Initialize Owl Carousel
    $('.hero-slider').owlCarousel({
        items: 1,
        loop: true,
        nav: true,
        dots: true,
        autoplay: true,
        autoplayTimeout: 5000,
        smartSpeed: 1000
    });

    // Sticky Header
    let lastScroll = 0;
    const header = $('.main-header');
    const topbarHeight = $('.topbar').outerHeight();
    
    $(window).scroll(function() {
        const currentScroll = $(this).scrollTop();
        
        // Add padding to body to prevent content jump when header becomes fixed
        if (!$('body').hasClass('header-padding-added')) {
            $('body').css('padding-top', header.outerHeight()).addClass('header-padding-added');
        }
        
        if (currentScroll > lastScroll && currentScroll > topbarHeight) {
            // Scrolling down & past the topbar
            header.addClass('sticky');
        } else if (currentScroll < lastScroll && header.hasClass('sticky')) {
            // Scrolling up
            if (currentScroll <= topbarHeight) {
                header.removeClass('sticky');
            }
        }
        
        lastScroll = currentScroll;
    });

    // Sticky Navigation
    const mainHeader = $('.main-header');
    const mainHeaderHeight = mainHeader.outerHeight();
    let previousScrollPosition = 0;

    $(window).scroll(function() {
        const currentScrollPosition = $(this).scrollTop();
        
        if (currentScrollPosition > mainHeaderHeight) {
            mainHeader.addClass('sticky');
        } else {
            mainHeader.removeClass('sticky');
        }
        
        previousScrollPosition = currentScrollPosition;
    });

    // Smooth Scroll
    $('a[href*="#"]').on('click', function(e) {
        e.preventDefault();
        $('html, body').animate(
            {
                scrollTop: $($(this).attr('href')).offset().top - 100,
            },
            500,
            'linear'
        );
    });

    // Contact Form Submission
    $('#contactForm').on('submit', function(e) {
        e.preventDefault();
        
        // Get form data
        const formData = {
            name: $('#name').val(),
            email: $('#email').val(),
            subject: $('#subject').val(),
            message: $('#message').val()
        };

        // Show loading state
        const submitBtn = $(this).find('button[type="submit"]');
        const originalText = submitBtn.text();
        submitBtn.prop('disabled', true).text('Sending...');

        // Simulate form submission (replace with actual API call)
        setTimeout(() => {
            // Show success message
            alert('Thank you for your message! We will get back to you soon.');
            
            // Reset form and button
            this.reset();
            submitBtn.prop('disabled', false).text(originalText);        }, 1500);
    });

    // Contact Form Captcha
    let captchaResult = generateCaptcha();

    function generateCaptcha() {
        const num1 = Math.floor(Math.random() * 10);
        const num2 = Math.floor(Math.random() * 10);
        const $generated = $('.submit__generated');
        $generated.html(`<span>${num1}</span> + <span>${num2}</span> = <input class="submit__input" type="text" maxlength="2" size="2" required>`);
        return num1 + num2;
    }

    // Refresh captcha
    $('.fa-refresh').click(function() {
        captchaResult = generateCaptcha();
    });

    // Form validation
    $('#form1').on('submit', function(e) {
        e.preventDefault();
        const userAnswer = parseInt($('.submit__input').val());
        
        if (isNaN(userAnswer)) {
            $('.submit__error--empty').removeClass('hide');
            $('.submit__error').addClass('hide');
            return false;
        }
        
        if (userAnswer !== captchaResult) {
            $('.submit__error').removeClass('hide');
            $('.submit__error--empty').addClass('hide');
            return false;
        }

        // Form is valid, prepare for submission
        const formData = new FormData(this);
        
        // Show loading state
        const submitBtn = $('#submit');
        submitBtn.prop('disabled', true).val('Sending...');

        // Simulate form submission (replace with actual API call)
        setTimeout(() => {
            alert('Thank you for your message! We will get back to you soon.');
            this.reset();
            submitBtn.prop('disabled', false).val('Submit');
            captchaResult = generateCaptcha();
        }, 1500);
    });    // Initialize Main Slider with enhanced settings
    $('.main-slider-carousel').owlCarousel({
        items: 1,
        loop: true,
        margin: 0,
        nav: true,
        dots: true,
        autoplay: true,
        autoplayTimeout: 6000,
        autoplayHoverPause: true,
        smartSpeed: 1000,
        animateOut: 'fadeOut',
        animateIn: 'fadeIn',
        navText: ['<i class="fa fa-angle-left"></i>', '<i class="fa fa-angle-right"></i>'],
        responsive: {
            0: {
                nav: false
            },
            768: {
                nav: true
            }
        },
        onInitialized: function(event) {
            // Add custom navigation arrows
            var owlNavigation = $(event.target).find('.owl-nav');
            owlNavigation.children('.owl-prev').html('<i class="fa fa-angle-left"></i>');
            owlNavigation.children('.owl-next').html('<i class="fa fa-angle-right"></i>');

            // Trigger animations for the first slide
            setTimeout(function() {
                $('.active .content').addClass('animated');
            }, 100);
        },
        onTranslated: function() {
            // Trigger animations for subsequent slides
            $('.active .content').addClass('animated');
        },
        onTranslate: function() {
            // Remove animations before slide change
            $('.content').removeClass('animated');
        }
    });
});

// Add Loading Animation
$(window).on('load', function() {
    $('.preloader').fadeOut('slow');
});
// Statistics Animation
function animateValue(el, target, suffix = "", duration = 2000) {
    let start = 0;
    let startTime = null;

    const step = timestamp => {
        if (!startTime) startTime = timestamp;
        const progress = Math.min((timestamp - startTime) / duration, 1);
        const current = Math.floor(progress * target);
        el.textContent = current.toLocaleString() + suffix;

        if (progress < 1) {
            window.requestAnimationFrame(step);
        }
    };

    window.requestAnimationFrame(step);
}

function handleScrollAnimations() {
    const elements = document.querySelectorAll('.stat-number');
    elements.forEach(el => {
        const rect = el.getBoundingClientRect();
        const isVisible = rect.top < window.innerHeight && rect.bottom >= 0;
        if (isVisible && !el.classList.contains('animated')) {
            el.classList.add('animated');
            const target = parseInt(el.getAttribute('data-target'));
            const suffix = el.getAttribute('data-suffix') || "";
            animateValue(el, target, suffix);
        }
    });
}

window.addEventListener('scroll', handleScrollAnimations);
window.addEventListener('load', handleScrollAnimations);

$(document).ready(function(){
  $('.main-slider-carousel').owlCarousel({
    items:1,
    loop:true,
    autoplay:true,
    autoplayTimeout:4000,
    nav:true,
    dots:true,
    animateOut: 'fadeOut',
    animateIn: 'fadeIn'
  });
});

// why sojar js

 document.querySelectorAll('.smooth-scroll').forEach(anchor => {
      anchor.addEventListener('click', function(e) {
        e.preventDefault();
        const targetId = this.getAttribute('href').substring(1);
        document.getElementById(targetId).scrollIntoView({ behavior: 'smooth' });
      });
    });

    // Accordion (Auto-close others)
    document.querySelectorAll('.accordion-toggle').forEach(button => {
      button.addEventListener('click', () => {
        const content = button.nextElementSibling;
        const isVisible = content.classList.contains('visible');
        
        // Close all other accordions
        document.querySelectorAll('.accordion-content').forEach(otherContent => {
          otherContent.classList.remove('visible');
          otherContent.previousElementSibling.querySelector('span').textContent = '▼';
        });
        
        // Toggle current accordion
        if (!isVisible) {
          content.classList.add('visible');
          button.querySelector('span').textContent = '▲';
        }
      });
    });

    // Carousel
    const carouselItems = document.querySelectorAll('.carousel-item');
    const prevButton = document.querySelector('.carousel-prev');
    const nextButton = document.querySelector('.carousel-next');
    let currentIndex = 0;

    function showCarouselItem(index) {
      carouselItems.forEach((item, i) => {
        item.classList.toggle('visible', i === index);
        item.classList.toggle('hidden', i !== index);
      });
    }

    prevButton.addEventListener('click', () => {
      currentIndex = (currentIndex - 1 + carouselItems.length) % carouselItems.length;
      showCarouselItem(currentIndex);
    });

    nextButton.addEventListener('click', () => {
      currentIndex = (currentIndex + 1) % carouselItems.length;
      showCarouselItem(currentIndex);
    });

    // Auto-advance carousel every 5 seconds
    setInterval(() => {
      currentIndex = (currentIndex + 1) % carouselItems.length;
      showCarouselItem(currentIndex);
    }, 5000);

    // Contact Form Validation
    document.getElementById('submit-contact').addEventListener('click', () => {
      const name = document.getElementById('name').value.trim();
      const email = document.getElementById('email').value.trim();
      const message = document.getElementById('message').value.trim();
      const formMessage = document.getElementById('form-message');

      if (!name || !email || !message) {
        formMessage.textContent = 'Please fill in all fields.';
        formMessage.classList.remove('hidden', 'text-green-200');
        formMessage.classList.add('text-red-200');
        return;
      }

      if (!/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email)) {
        formMessage.textContent = 'Please enter a valid email address.';
        formMessage.classList.remove('hidden', 'text-green-200');
        formMessage.classList.add('text-red-200');
        return;
      }

      formMessage.textContent = 'Thank you! We will get back to you soon.';
      formMessage.classList.remove('hidden', 'text-red-200');
      formMessage.classList.add('text-green-200');
      document.getElementById('name').value = '';
      document.getElementById('email').value = '';
      document.getElementById('message').value = '';
    });

    // Quick Contact Button
    document.getElementById('quick-contact').addEventListener('click', () => {
      document.getElementById('contact').scrollIntoView({ behavior: 'smooth' });
    });