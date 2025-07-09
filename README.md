install git 

//get source code.on cmd
git clone https://github.com/tanishka21067/sojar-website.git

git config --global user.name "your username"
git config --global user.email "your-email@example.com"

//create branch
git branch yourbranchname

//checkout to the specific branch
git checkout tanishka_development

//pull request










<!-- old code without responsive -->

:root {
    --primary-color: #fb7915;
    --secondary-color: #000080;
    --white: #ffffff;
    --dark: #1a1a1a;
    --transition: all 0.3s ease;
    --font-family: 'Poppins', sans-serif;
    --font-size: 16px;
    
}

/* Global Styles */
body {
    font-family: 'Poppins', sans-serif;
    line-height: 1.1;
}

/* Header Styles */
/* Container for dropdown */
ul.dropdown-menu {
    list-style: none;
    margin: 0;
    padding: 8px 0;
    background: #fffffff0;
    align-content: center;
    border: 1px solid #aeaeae;
    height: 495px;
    border-radius: 12px;
    box-shadow: 0 28px 24px rgb(0, 0, 0);
    width: 395px;
    transition: all 0.3s ease-in-out;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}
.dropdown-menu {
    max-height: 520px;
    overflow-y: auto;
    scrollbar-width: thin;
    scrollbar-color: #626262 #f8f9fa;
}
.dropdown-menu::-webkit-scrollbar {
    width: 8px;
}
.dropdown-menu::-webkit-scrollbar-track {
    background: #f8f9fa;
    border-radius: 10px;
}
.dropdown-menu::-webkit-scrollbar-thumb {
    background: #626262;
    border-radius: 10px;
}
.dropdown-menu::-webkit-scrollbar-thumb:hover {
    background: #626262;
}
/* Add horizontal line after each dropdown item */
.dropdown-menu li::after {
    content: '';
    position: absolute;
    bottom: 0;
    left: 20px;
    right: 20px;
    height: 1px;
    background: linear-gradient(90deg, #232323, #8E2DE2);
    opacity: 0.8;
}
/* Remove the line after the last dropdown item */
.dropdown-menu li:last-child::after {
    content: none;
}
/* Ensure the li has relative positioning for the ::after element */
.dropdown-menu li {
    position: relative;
}
/* Each dropdown item */
ul.dropdown-menu li {
    padding: 0;
}

/* Links inside dropdown */
ul.dropdown-menu .dropdown-item {
    display: block;
    padding: 10px 18px;
    color: #333;
    text-decoration: none;
    font-size: 15px;
    border-radius: 6px;
    transition: background 0.2s ease, color 0.2s ease;
}

/* Hover effect */
ul.dropdown-menu .dropdown-item:hover {
    background-color: #1b9199;
    color: lab(100% 0.01 -0.01);
}

/* Optional: Add slight animation when appearing */
ul.dropdown-menu {
    opacity: 0;
    transform: translateY(10px);
    visibility: hidden;
    position: absolute;
    z-index: 1000;
}

/* When menu is shown (example class to toggle) */
ul.dropdown-menu.show {
    opacity: 1;
    transform: translateY(0);
    visibility: visible;
}
/* Hero Section */
.hero-section {
    position: relative;
    height: 100vh;
    margin-top: -10px;
}

.hero-slider .slide-item {
    height: 100vh;
    background-size: cover;
    background-position: center;
    position: relative;
    z-index: 1;
}

.hero-slider .slide-item::before {
    content: '';
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    background: rgba(0,0,0,0.5);
    z-index: -1;
}

.hero-slider .content {
    color: var(--white);
    max-width: 700px;
    padding: 20px 0;
}

.hero-slider h1 {
    font-size: 48px;
    font-weight: 700;
    margin-bottom: 20px;
}

/* Main Slider Styles */
.main-slider {
    position: relative;
    overflow: hidden;
    width: 100%;
}

.main-slider .slide {
    position: relative;
    padding: 0;
    margin: 0;
}

.main-slider .image-layer {
    position: relative;
    width: 100%;
    height: 600px;
    background-size: cover;
    background-position: center center;
    background-repeat: no-repeat;
    display: flex;
    align-items: center;
}

.main-slider .image-layer::before {
    content: '';
    position: absolute;
    left: 0;
    top: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.4);
    z-index: 0;
}

.main-slider .container {
    position: relative;
    z-index: 1;
}

.main-slider .content {
    position: relative;
    z-index: 1;
    max-width: 700px;
    margin: 0 auto;
    padding: 60px 15px;
    text-align: center;
    color: #fff;
}

.main-slider .content h2 {
    font-size: 48px;
    line-height: 1.2;
    font-weight: 700;
    margin-bottom: 20px;
    color: #fff;
    animation: fadeInDown 1s ease forwards;
}

.main-slider .content p {
    font-size: 18px;
    margin-bottom: 30px;
    color: #fff;
    animation: fadeInUp 1s ease 0.3s forwards;
}

.main-slider .content .btn {
    animation: fadeInUp 1s ease 0.6s forwards;
    min-width: 160px;
}

/* Main Slider Animation Styles */


.fadeIn {
    animation: fadeIn 0.7s ease forwards;
}

.fadeOut {
    animation: fadeOut 0.7s ease forwards;
}

/* Update Owl Carousel Navigation */
.main-slider .owl-nav {
    margin-top: 0;
    position: absolute;
    top: 50%;
    transform: translateY(-50%);
    width: 100%;
    z-index: 100;
    opacity: 0;
    transition: opacity 0.3s ease;
}

.main-slider:hover .owl-nav {
    opacity: 1;
}

.main-slider .owl-nav button.owl-prev,
.main-slider .owl-nav button.owl-next {
    position: absolute;
    width: 50px;
    height: 50px;
    background: rgba(255, 255, 255, 0.2) !important;
    border-radius: 50%;
    color: #fff !important;
    font-size: 24px;
    transition: all 0.3s ease;
    margin: 0;
    display: flex;
    align-items: center;
    justify-content: center;
}

.main-slider .owl-nav button.owl-prev {
    left: 20px;
}

.main-slider .owl-nav button.owl-next {
    right: 20px;
}

.main-slider .owl-nav button:hover {
    background: var(--primary-color) !important;
}

/* Update Dots Navigation */
.main-slider .owl-dots {
    position: absolute;
    bottom: 20px;
    width: 100%;
    text-align: center;
    z-index: 100;
}

.main-slider .owl-dots .owl-dot {
    display: inline-block;
    margin: 0 5px;
}

.main-slider .owl-dots .owl-dot span {
    width: 10px;
    height: 10px;
    background: rgba(255, 255, 255, 0.5);
    border-radius: 50%;
    display: block;
    transition: all 0.3s ease;
}

.main-slider .owl-dots .owl-dot.active span {
    background: var(--primary-color);
    transform: scale(1.3);
}

/* Update Slider Content Animation */
.main-slider .content {
    opacity: 0;
    transform: translateY(30px);
    transition: all 1s ease;
}

.main-slider .active .content {
    opacity: 1;
    transform: translateY(0);
}

.main-slider .content h2 {
    opacity: 0;
    transform: translateY(30px);
    transition: all 1s ease 0.3s;
}

.main-slider .content p {
    opacity: 0;
    transform: translateY(30px);
    transition: all 1s ease 0.6s;
}

.main-slider .content .btn {
    opacity: 0;
    transform: translateY(30px);
    transition: all 1s ease 0.9s;
}

.main-slider .active .content h2,
.main-slider .active .content p,
.main-slider .active .content .btn {
    opacity: 1;
    transform: translateY(0);
}

.main-slider .owl-dots {
    position: absolute;
    bottom: 20px;
    width: 100%;
    text-align: center;
}

.main-slider .owl-dots .owl-dot {
    display: inline-block;
    margin: 0 5px;
}

.main-slider .owl-dots .owl-dot span {
    width: 12px;
    height: 12px;
    background: rgba(255, 255, 255, 0.5);
    border-radius: 50%;
    display: block;
    transition: all 0.3s ease;
}

.main-slider .owl-dots .owl-dot.active span {
    background: var(--primary-color);
}

/* Services Section */
.services-page-section {
    position: relative;
    padding: 90px 0 60px;
    background: #f8f9fa;
}

.section-title {
    margin-bottom: 50px;
}

.section-title h2 {
    font-size: 36px;
    font-weight: 700;
    color: var(--secondary-color);
    margin-bottom: 15px;
}

.service-block {
    margin-bottom: 30px;
    transition: transform 0.3s ease;
}

.service-block .inner-box {
    position: relative;
    padding: 35px 25px;
    background: var(--white);
    border-radius: 10px;
    box-shadow: 0 0 15px rgba(0,0,0,0.08);
    text-align: center;
    min-height: 220px;
    transition: all 0.3s ease;
}

.service-block .inner-box:hover {
    transform: translateY(-5px);
    box-shadow: 0 10px 25px rgba(162, 40, 40, 0.15);
}

.service-block .icon-box {
    position: relative;
    margin-bottom: 15px;
    transition: transform 0.3s ease;
}

.service-block .inner-box:hover .icon-box {
    transform: scale(1.1);
}

.service-block .icon-box img {
    max-width: 60px;
    height: auto;
}

.service-block h5 {
    margin-bottom: 15px;
    font-size: 18px;
    font-weight: 600;
}

.service-block h5 a {
    color: #333;
    text-decoration: none;
    transition: color 0.3s ease;
}

.service-block h5 a:hover {
    color: var(--primary-color);
}

.service-block .arrow {
    position: relative;
    width: 35px;
    height: 35px;
    display: inline-flex;
    align-items: center;
    justify-content: center;
    border-radius: 50%;
    background: rgba(251, 109, 21, 0.1);
    color: var(--primary-color);
    transition: all 0.3s ease;
}

.service-block .arrow:hover {
    background: var(--primary-color);
    color: white;
    transform: translateX(5px);
}

.service-block .service-image {
    margin: -35px -25px 20px;
    overflow: hidden;
    border-radius: 10px 10px 0 0;
}

.service-block .service-image img {
    width: 100%;
    height: 200px;
    object-fit: cover;
    transition: transform 0.3s ease;
}

.service-block .inner-box:hover .service-image img {
    transform: scale(1.05);
}
/* why and running nums */
.why-section {
    font-family: 'Inter', sans-serif;
    background: linear-gradient(to right, #b7e0f4, #6fe4ef);
    padding: 60px 20px;
    text-align: center;
    border-radius: 29px;
    box-shadow: 0 20px 16px rgba(176, 206, 207, 0.929);
    max-width: 1000px;
    margin: 40px auto;
}

.why-section h2 {
    font-size: 28px;
    margin-bottom: 20px;
    color: #1a1a1a;
}

.why-section p.description {
    font-size: 16px;
    color: #555;
    max-width: 700px;
    margin: 0 auto 40px;
    line-height: 1.6;
}

.stats-container {
    display: flex;
    justify-content: center;
    flex-wrap: wrap;
    gap: 40px;
    margin-bottom: 30px;
    
}

.stat-box {
    background: #c8daf5;
    padding: 25px 20px;
    border-radius: 16px;
    width: 220px;
    box-shadow: 0 4px 14px rgba(0, 0, 0, 0.07);
    transition: transform 0.2s;
}

.stat-box:hover {
    transform: translateY(-5px);
}

.stat-number {
    font-size: 26px;
    font-weight: 600;
    color: #1a73e8;
}

.stat-label {
    margin-top: 10px;
    font-size: 14px;
    color: #444;
}

.find-out-btn {
    display: inline-block;
    margin-top: 20px;
    padding: 12px 24px;
    background-color: #f87428;
    color: white;
    border: none;
    border-radius: 8px;
    font-size: 15px;
    text-decoration: none;
    transition: background-color 0.3s ease;
}

.find-out-btn:hover {
    background-color: #19a80c;
}

.stats-container {
    display: flex;
    flex-wrap: wrap;
    gap: 30px;
    justify-content: center;
    margin: 40px auto;
    max-width: 1000px;
    padding: 20px;
}

.stat-box {
    background: #d4e4f9;
    padding: 24px 20px;
    border-radius: 19px;
    width: 200px;
    text-align: center;
    box-shadow: 0 21px 29px rgba(0, 0, 0, 0.09);
    transition: transform 0.2s ease;
}

.stat-box:hover {
    transform: translateY(-6px);
}

.stat-number {
    font-size: 28px;
    font-weight: 600;
    color: #f56527;
    margin-bottom: 10px;
}

.stat-label {
    font-size: 14px;
    color: #444;
    line-height: 1.4;
}

/* Footer */
/* Footer background */
.main-footer {
    background-color: #050579;
    color: #ffffff;
    position: relative;
    padding: 48px 0 10px; /* reduced padding to shrink footer height */
   /* reduced padding between lists(Quick Links and logo )to make map large in width */
    padding-left: 32px; /* Adjust this value as needed */
    padding-right: 32px; /* Adjust this value as needed */
    width: 100%; 
    box-sizing: border-box;
    overflow: hidden;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}


/* Background pattern layers */
.pattern-layer-one,
.pattern-layer-two {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-repeat: no-repeat;
    background-position: center;
    background-size: cover;
    z-index: 1;
    opacity: 0.05;
}


.main-footer .auto-container {
    position: relative;
    z-index: 2;
    padding-left: 32px; /* Adjust this value as needed */
    margin-left: -21px; /* Adjust this value as needed */
}

/* Footer widgets section */
.widgets-section {
    padding-bottom: 1px; /* slightly less padding */
}

.footer-widget {
    margin-bottom: 10px; /* less margin between widgets */
}

.footer-widget h5 {
    font-size: 16px;
    font-weight: 600;
    margin-bottom: 10px; /* reduced margin under headings */
    color: #ffffff;
    margin-left: -55px; /* slight adjustment to align with other text */
}

/* About text */
.logo-widget .text {
    font-size: 12px;
    line-height: 1.4; /* tighter line height */
    color: #cccccc;
}

/* Footer links with double arrows */
.footer-widget ul.list-link {
    list-style: none;
    padding: 0;
    margin: 0;
}

.footer-widget ul.list-link li {
    margin-bottom: 6px; /* reduced spacing between list items */
    position: relative;
    padding-left: 17px;
    font-size: 13px;
    /* move more to lleft */
    margin-left: -68px; /* slight adjustment to align with other text */
}

.footer-widget ul.list-link li::before {
    content: "»";
    position: absolute;
    left: 0;
    color: #ffffff;
}

.footer-widget ul.list-link li a {
    color: #ffffff;
    text-decoration: none;
    transition: color 0.3s ease;
    display: inline-block;
    font-size: 13px;
}

.footer-widget ul.list-link li a:hover {
    color: #00bcd4;
}

/* Contact info list */
.contact-widget ul {
    list-style: none;
    padding: 0;
    margin: 0;
    margin-left: -55px;
}

.contact-widget ul li {
    margin-bottom: 7px; /* reduced spacing */
    font-size: 13px;
    color: #ffffff;
}

.contact-widget ul li strong {
    display: block;
    color: #ffffff;
    margin-bottom: 3px;
    font-weight: 500;
}

.contact-widget ul li a {
    color: #ffffff;
    text-decoration: none;
    font-size: 13px;
}

.contact-widget ul li a:hover {
    color: #00bcd4;
}

/* Social Icons */
.social-box {
    margin-top: 15px;
    padding: 0;
    list-style: none;
    display: flex;
    gap: 10px;
}

.social-box li a {
    display: inline-block;
    width: 28px;  /* smaller icons */
    height: 28px;
    line-height: 28px;
    text-align: center;
    color: #d6d1d1;
    background-color: #2d2d3d;
    border-radius: 55%;
    transition: background-color 0.3s ease, color 0.3s ease;
}

.social-box li a:hover {
    background-color: #00bcd4;
    color: #ffffff;
}
/* Social icons */
.social-box li a i {
    font-size: 14px; /* smaller icon size */
}

/* Footer bottom */
.footer-bottom {
    border-top: 1px solid #333;
    padding-top: 15px; /* reduced padding */
    margin-top: 20px;  /* less margin to reduce height */
    text-align: center;
    font-size: 13px;
    color: #aaaaaa;
}

.copyright {
font-size: 13px;
}


/* Contact Button */
.contact-btn {
    background-color: var(--primary-color);
    border: none;
    padding: 8px 20px;
    margin-left: 15px;
    transition: var(--transition);
}

.contact-btn:hover {
    background-color: var(--secondary-color);
}

/* Contact Modal Styles */
.modal-content {
    border-radius: 10px;
    border: none;
}

.modal-header {
    border: none;
    padding: 20px;
}

.modal-body {
    padding: 0;
}

/* Contact Info Section */
.contact-info-section {
    padding: 30px 0;
    background: #f8f9fa;
}

.contact-info-section .auto-container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 0 15px;
}

.contact-info-section .title-box {
    text-align: center;
    margin-bottom: 50px;
}

.contact-info-section .title-box h2 {
    font-size: 36px;
    color: var(--secondary-color);
    font-weight: 700;
    margin-bottom: 15px;
}

.contact-info-section .title-box .text {
    font-size: 18px;
    line-height: 1.6;
    margin-bottom: 30px;
}

.contact-info-section .title-box .text a {
    color: var(--primary-color);
    text-decoration: none;
    transition: var(--transition);
}

.contact-info-section .title-box .text a:hover {
    color: var(--secondary-color);
}

.contact-info-section .inner-column {
    background: var(--white);
    padding: 30px;
    border-radius: 10px;
    box-shadow: 0 0 20px rgba(165, 11, 11, 0.1);
    height: 100%;
    transition: var(--transition);
}

.contact-info-section .inner-column:hover {
    transform: translateY(-5px);
}

.contact-info-section .icon-box {
    font-size: 40px;
    color: var(--primary-color);
    margin-bottom: 20px;
    text-align: center;
}

.contact-info-section .content ul {
    list-style: none;
    padding: 0;
    margin: 0;
    text-align: center;
}

.contact-info-section .content ul li {
    margin-bottom: 10px;
}

.contact-info-section .content ul li strong {
    display: block;
    color: var(--secondary-color);
    font-size: 18px;
    margin-bottom: 5px;
}

/* Contact Map Section */
.contact-map-section {
    padding: 80px 0;
    background: var(--white);
}

.contact-map-section .sec-title {
    margin-bottom: 40px;
}

.contact-map-section .sec-title h2 {
    font-size: 32px;
    color: var(--secondary-color);
    font-weight: 700;
    margin-bottom: 15px;
    
}

.contact-map-section .sec-title .text {
    font-size: 16px;
    line-height: 1.6;
    color: #666;
}


/* Sticky Navigation Styles */
.main-header {
    position: fixed;
    width: 100%;
    top: 0;
    left: 0;
    z-index: 1000;
    transition: var(--transition);
    background: #f8f8f8;
}

.main-header.sticky {
    box-shadow: 0 5px 15px rgba(206, 28, 28, 0.1);
}

.main-header.sticky .topbar {
    display: none;
}

.main-header.sticky .navbar {
    padding: 15px 0;
}

.main-header .navbar {
    padding: 11px ;
    font-size: 17px;  /* Increased font size */
    font-weight: 600;  /* Made text bold */
}

/* Add padding to body to prevent content jump */
body {
    padding-top: 76px; /* Adjusted for navbar height */
}

@media (max-width: 991px) {
    body {
        padding-top: 126px; /* Adjusted for navbar height on mobile */
    }
}

/* Enquiry Button Styles */
.theme-btn {
    position: relative;
    display: inline-block;
    transition: var(--transition);
    text-decoration: none;
    margin-left: 25px; /* Adjusted to align with navbar */
}

.navbar-nav{
    margin-right: -10px; /* Aligns the navbar items to the left */
}
.btn-style-one {
    position: relative;
    padding: 12px 30px;
    color: var(--white);
    background: var(--primary-color);
    border-radius: 5px;
    font-weight: 500;
    border: 2px solid var(--primary-color);
    
}

.btn-style-one:hover {
    background: transparent;
    color: var(--primary-color);
}

.btn-style-one .txt {
    position: relative;
    z-index: 1;
}

/* Page Title Styles */
.page-title {
    position: relative;
    padding: 20px 0 10px;
    background-color: var(--secondary-color);
    text-align: center;
    color: var(--white);
}

.pattern-layer-one {
    position: absolute;
    width: 100%;
    height: 100%;
    background-repeat: no-repeat;
    background-position: center;
    opacity: 0.05;
    margin-top: 10px;
}

.page-breadcrumb {
    position: relative;
    margin-top: 15px;
    padding: 0;
}

.page-breadcrumb li {
    position: relative;
    display: inline-block;
    margin-right: 10px;
    padding-right: 15px;
    color: var(--white);
    font-size: 16px;
    text-transform: capitalize;
}

.page-breadcrumb li:after {
    position: absolute;
    right: -3px;
    content: '/';
    top: 0;
}

.page-breadcrumb li:last-child::after {
    display: none;
}

.page-breadcrumb li a {
    color: var(--white);
    text-decoration: none;
    transition: var(--transition);
}

.page-breadcrumb li a:hover {
    color: var(--primary-color);
}

/* Navigation Enquiry Button Styles */
.navbar-nav .theme-btn {
    padding: 9px 20px;
    margin-top: 2px;
}

.navbar-nav .theme-btn:hover {
    color: var(--white);
    background: var(--secondary-color);
    border-color: var(--secondary-color);
}

/* Updated navigation link styles */
.navbar-nav .nav-link {
    font-weight: 600;
    transition: var(--transition);
    color: #171717;
    font-size: 19px; /* Increased font size */
}

.navbar-nav .nav-link:hover {
    color:  var(--primary-color);
    text-decoration: underline;
    
}

@media (max-width: 991px) {
    .navbar-nav .theme-btn {
        margin: 10px 15px;
    }
}

/* Responsive styles */
@media (max-width: 991px) {
    .contact-info-section .inner-column {
        margin-bottom: 30px;
    }
      .contact-map-section iframe {
        height: 450px;
        margin-top: 30px;
    }

    .footer-widget--time iframe {
        min-height: 300px;
    }
}

/* Flaticon Font */
@font-face {
    font-family: 'Flaticon';
    src: url('assets/fonts/Flaticon.eot');
    src: url('assets/fonts/Flaticon.eot?#iefix') format('embedded-opentype'),
         url('assets/fonts/Flaticon.woff2') format('woff2'),
         url('assets/fonts/Flaticon.woff') format('woff'),
         url('assets/fonts/Flaticon.ttf') format('truetype');
    font-weight: normal;
    font-style: normal;
}

[class^="flaticon-"]:before,
[class*=" flaticon-"]:before {
    font-family: "Flaticon";
    font-style: normal;
    font-weight: normal;
    font-variant: normal;
    text-transform: none;
    line-height: 1;
    -webkit-font-smoothing: antialiased;
    -moz-osx-font-smoothing: grayscale;
}

.flaticon-long-arrow-pointing-to-the-right:before {
    content: "\f105";
}

/* Service Page Styles */
.service-page {
    position: relative;
    padding: 120px 10 90px;
    overflow: hidden;
    background-color: #f8f9fa;
    /* want to reduce padding,height and width of boxes */
    max-width: 1200px;
    margin: auto;
    border-radius: 20px;
    box-shadow: 0 7px 30px rgba(207, 216, 255, 0.872);
        
}

.service-page__bg {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    background-repeat: no-repeat;
    background-position: center;
    opacity: 0.1;
}

.sec-title__tagline {
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 14px;
    text-transform: uppercase;
    letter-spacing: 0.2em;
    margin-bottom: 10px;
    color: var(--primary-color);
}

.sec-title__img {
    margin: 0 10px;
    height: 12px;
}

.sec-title__title {
    font-size: 48px;
    line-height: 1.2;
    margin-bottom: 50px;
    color: var(--secondary-color);
}

.service-card {
    position: relative;
    margin-bottom: 30px;
}

.service-card__inner {
    position: relative;
    background: #fff;
    border-radius: 10px;
    overflow: hidden;
    transition: all 0.4s ease;
    box-shadow: 10 10 20px rgba(0, 0, 0, 0.05);
         height: 100%;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    width: 98%;
    /* padding: 20px;
     height: 100%;
    justify-content: space-between;  */

}

.service-card:hover .service-card__inner {
    transform: translateY(-10px);
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.1);
}

.service-card__top {
    position: relative;
    padding: 30px;
    display: flex;
    justify-content: space-between;
    align-items: center;
}

.service-card__title {
    font-size: 22px;
    margin: 0;
}

.service-card__title a {
    color: var(--secondary-color);
    text-decoration: none;
    transition: all 0.3s ease;
}

.service-card__title a:hover {
    color: var(--primary-color);
}

.service-card__icon {
    width: 60px;
    height: 60px;
    display: flex;
    align-items: center;
    justify-content: center;
    background: rgba(251, 109, 21, 0.1);
    border-radius: 50%;
    color: var(--primary-color);
    font-size: 24px;
    transition: all 0.3s ease;
}

.service-card:hover .service-card__icon {
    background: var(--primary-color);
    color: #fff;
}

.service-card__thumb {
    position: relative;
}

.service-card__thumb__item {
    position: relative;
    overflow: hidden;
    height: 250px;
    margin-right: -100px;
}

.service-card__thumb__item img {
    width: 100%;
    height: 100%;
    object-fit: cover;
    transition: transform 0.5s ease;
    
}

.service-card:hover .service-card__thumb__item img {
    transform: scale(1.1);
}

.service-card__thumb__shape {
    position: absolute;
    bottom: 0;
    left: 0;
    width: 100%;
}

.service-card__thumb__shape img {
    width: 100%;
    display: block;
}
.Discover {
    display: inline-flex;
    align-items: center;
    justify-content: center;
    padding: 12px 30px; /* Increased padding for a wider button */
    border-radius: 50px; /* Rounded corners to match the image */
    background: linear-gradient(90deg, #fc824d, #7c52fc); /* Blue-to-purple gradient */
    text-decoration: none;
    color: #ffffff; /* White text */
    font-size: 16px;
    font-weight: 600; /* Slightly bold text */
    font-family: 'Inter', sans-serif; /* Matches the Google Font in your web.html */
    transition: all 0.3s ease;
    box-shadow: 0 4px 15px rgba(0, 0, 0, 0.2); /* Subtle shadow for depth */
}

.Discover:hover {
    background: linear-gradient(90deg, #8E2DE2, #4A00E0); /* Reverse gradient on hover */
    box-shadow: 0 6px 20px rgba(0, 0, 0, 0.3); /* Enhanced shadow on hover */
    transform: translateY(-2px); /* Slight lift effect on hover */
    color: #ffffff;
}
.text-center {
    text-align: center;
}

.mt-4 {
    margin-top: 1.5rem; /* Adds spacing above the button */
}
/* Animation Classes */
@keyframes fadeInUp {
    from {
        opacity: 0;
        transform: translateY(30px);
    }
    to {
        opacity: 1;
        transform: translateY(0);
    }
}

.wow.fadeInUp {
    animation: fadeInUp 1s ease forwards;
}

.gutter-y-30 {
    margin-top: -15px;
    margin-bottom: -15px;
}

.gutter-y-30 > [class*="col-"] {
    padding-top: 15px;
    padding-bottom: 15px;
}

/* footer neumorphic button */
.social-neumorphic {
    text-align: left;
    margin-top: 30px;
}

.neu-button {
    width: 30px;
    height: 30px;
    line-height: 30px;
    margin: 10px;
    border-radius: 40%;
    background: #e0e0e0;
    /* box-shadow: 8px 8px 15px #938585, -8px -8px 15px #938585; */
    display: inline-block;
    color: #252525;
    font-size: 14px;
    text-align: center;
    transition: 0.3s ease;
}

.neu-button:hover {
    box-shadow: inset 6px 6px 10px #b8b7b7, inset -6px -6px 10px #ffffff;
    color: #007bff;
}

.neu-button i {
    transition: transform 0.3s ease;
}
/* services button below services */
.view-all-services-btn {
    display: block;
    width: 150px;
    margin: 20px auto 0;
    padding: 10px 20px;
    background: linear-gradient(90deg, #8E2DE2, #4A00E0);
    color: #ffffff;
    text-align: center;
    text-decoration: none;
    border-radius: 5px;
    font-weight: 400;
    font-size: 15px;
    transition: all 0.4s ease;
    /* move button to little left */
    margin-left: -75px; /* Adjust this value to move the button left */
   /* move button little down */
    margin-top: 30px; /* Adjust this value to move the button down */
    position: relative;
    overflow: hidden;
    z-index: 1;
}

.view-all-services-btn:hover {
    background-color: #005d9b;
    transform: translateY(-2px);
}

/* Glowing Outline Effect */
.view-all-services-btn::before {
    content: '';
    position: absolute;
    top: -2px;
    left: -2px;
    right: -2px;
    bottom: -2px;
    background: linear-gradient(45deg, #7aa3fd, #627bf4, #4c2cff, #652dff);
    z-index: -1;
    filter: blur(10px);
    animation: glowing 5s linear infinite;
}

.view-all-services-btn::after {
    content: '';
    position: absolute;
    top: 0;
    left: 30;
    right: 0;
    bottom: 0;
    background: inherit;
    z-index: -1;
   /* filter: blur(5px);   */
    border-radius: 5px;
    opacity: 0.5;
}

@keyframes glowing {
    0% { transform: rotate(0deg); }
    100% { transform: rotate(360deg); }
}


/* services css */

/*  1. local literature service code */
.fade-in {
      animation: fadeIn 1s ease-in-out;
    }
    @keyframes fadeIn {
      0% { opacity: 0; transform: translateY(20px); }
      100% { opacity: 1; transform: translateY(0); }
    }
/* Local Literature Service Page Styles - Sojar Research */
.local-hero {
  background: #2563eb;
  color: #fff;
  padding: 64px 0 48px 0;
  text-align: center;
}
.local-hero h1 {
  font-size: 2.8rem;
  font-weight: 800;
  margin-bottom: 0.5em;
}
.local-hero p {
  font-size: 1.25rem;
  max-width: 700px;
  margin: 0 auto;
  font-weight: 400;
}   
/* End Local Literature Service Page Styles */
    

/* PSMF Service Page Styles - Sojar Research */
.psmf-hero {
  background: #2563eb;
  color: #fff;
  padding: 64px 0 48px 0;
  text-align: center;
}
.psmf-hero h1 {
  font-size: 2.8rem;
  font-weight: 800;
  margin-bottom: 0.5em;
}
.psmf-hero p {
  font-size: 1.25rem;
  max-width: 700px;
  margin: 0 auto;
  font-weight: 400;
}
/* End PSMF Service Page Styles */



/* PV Services for Distributors - Sojar Research */
.pvservices-hero {
  background: #2563eb;
  color: #fff;
  padding: 64px 0 48px 0;
  text-align: center;
}
.pvservices-hero h1 {
  font-size: 2.8rem;
  font-weight: 800;
  margin-bottom: 0.5em;
}
.pvservices-hero p {
  font-size: 1.25rem;
  max-width: 700px;
  margin: 0 auto;
  font-weight: 400;
}
/* End PV Services for Distributors Styles */

/* Dossier Preparation & Regulatory Affairs - Sojar Research */
.dossier-hero {
  background: #2563eb;
  color: #fff;
  padding: 64px 0 48px 0;
  text-align: center;
}
.dossier-hero h1 {
  font-size: 2.8rem;
  font-weight: 800;
  margin-bottom: 0.5em;
}
.dossier-hero p {
  font-size: 1.25rem;
  max-width: 700px;
  margin: 0 auto;
  font-weight: 400;
}
/* End Dossier Preparation & Regulatory Affairs Styles */

/* QPPV & Local Contact Person for PV - Sojar Research */
.qppv-hero {
  background: #2563eb;
  color: #fff;
  padding: 64px 0 48px 0;
  text-align: center;
}
.qppv-hero h1 {
  font-size: 2.8rem;
  font-weight: 800;
  margin-bottom: 0.5em;
}
.qppv-hero p {
  font-size: 1.25rem;
  max-width: 700px;
  margin: 0 auto;
  font-weight: 400;
}
/* End QPPV & Local Contact Person for PV Styles */
/* Service: GVP Audits/Inspection Preparedness for Pharmacovigilance */
.service-hero {
  background: #2366d1;
  color: #fff;
  text-align: center;
  padding: 3rem 1rem 2rem 1rem;
}
.service-hero h1 {
  font-size: 2.5rem;
  font-weight: bold;
  margin-bottom: 0.5rem;
}
.service-hero p {
  font-size: 1.2rem;
  margin-bottom: 0;
}
.service-section {
  background: #fff;
  padding: 2.5rem 1rem 1.5rem 1rem;
  text-align: center;
}
.service-section h2 {
  color: #2366d1;
  font-size: 2rem;
  margin-bottom: 2rem;
  font-weight: 700;
}
.service-grid {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  gap: 1.5rem;
  max-width: 1100px;
  margin: 0 auto;
}
.service-card {
  background: #f8fafc;
  border-radius: 1rem;
  box-shadow: 0 4px 18px rgba(35,102,209,0.08);
  padding: 2rem 1.2rem;
  transition: transform 0.2s, box-shadow 0.2s;
  color: #222;
  text-align: left;
}
.service-card h3 {
  color: #111;
  font-size: 1.15rem;
  font-weight: 700;
  margin-bottom: 0.7rem;
}
.service-card p {
  color: #333;
  font-size: 1rem;
}
.service-card:hover {
  transform: translateY(-8px) scale(1.03);
  box-shadow: 0 8px 32px rgba(35,102,209,0.18);
}
/* End of GVP Audits/Inspection Preparedness for Pharmacovigilance */

/* Service: Medical Information and Call Center */
.service-hero {
  background: #2366d1;
  color: #fff;
  text-align: center;
  padding: 3rem 1rem 2rem 1rem;
}
.service-hero h1 {
  font-size: 2.5rem;
  font-weight: bold;
  margin-bottom: 0.5rem;
}
.service-hero p {
  font-size: 1.2rem;
  margin-bottom: 0;
}
.service-section {
  background: #fff;
  padding: 2.5rem 1rem 1.5rem 1rem;
  text-align: center;
}
.service-section h2 {
  color: #2366d1;
  font-size: 2rem;
  margin-bottom: 2rem;
  font-weight: 700;
}
.service-grid {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  gap: 1.5rem;
  max-width: 1100px;
  margin: 0 auto;
}
.service-card {
  background: #f8fafc;
  border-radius: 1rem;
  box-shadow: 0 4px 18px rgba(35,102,209,0.08);
  padding: 2rem 1.2rem;
  transition: transform 0.2s, box-shadow 0.2s;
  color: #222;
  text-align: left;
}
.service-card h3 {
  color: #111;
  font-size: 1.15rem;
  font-weight: 700;
  margin-bottom: 0.7rem;
}
.service-card p {
  color: #333;
  font-size: 1rem;
}
.service-card:hover {
  transform: translateY(-8px) scale(1.03);
  box-shadow: 0 8px 32px rgba(35,102,209,0.18);
}









































































<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sojar Research </title>
   
    <!-- favicon -->
    <link rel="apple-touch-icon" sizes="180x180" href="data:image/png;base64,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">
    <link rel="icon" type="image/png" sizes="540x540" href="data:image/png;base64,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">
     <link rel="manifest" href="data:image/png;base64,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">
    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">    <!-- Custom CSS -->
    <link rel="stylesheet" href="web.css">
    <link rel="stylesheet" href="css/service-page.css">
    <!-- Font Awesome -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <!-- Owl Carousel -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/assets/owl.carousel.min.css">
    <!-- Animate CSS -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/animate.css/4.1.1/animate.min.css">
    <!-- Custom Icon Font -->
    <link rel="stylesheet" href="assets/fonts/icomoon/style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.0/css/all.min.css">

    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/assets/owl.carousel.min.css"/>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/assets/owl.theme.default.min.css"/>

</head>
<body>
    <!-- Header Section -->  
     <header class="main-header">    
        <nav class="navbar navbar-expand-lg">
            <div class="container">
                <a class="navbar-brand" href="abt.html" style="display: flex; margin-left: -40px;">
                    <i class="fas fa-bars"></i>
                </a>
                <!-- logo -->
             <a href="web.html">
               <img src="https://i.postimg.cc/d3hYgnfm/SOJAR-Copy.png" alt="" title="" style="width: 200px;"></a>


               
                <div class="collapse navbar-collapse" id="navbarNav">
                    <ul class="navbar-nav ms-auto">
                        <li class="nav-item"><a class="nav-link active" href="web.html">Home</a></li>
                        <li class="nav-item"><a class="nav-link" href="abt.html">About Us</a></li>
                        <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown">Services</a>
                            <ul class="dropdown-menu">
                                <li><a class="dropdown-item" href="pvsystemandSOPsServices.html">PV System And SOP's</a></li>
                                <li><a class="dropdown-item" href="pvconsultancy.html">PV Consultancy</a></li>
                                <li><a class="dropdown-item" href="AggregateReports.html">Aggregate Reports</a></li>
                                <li><a class="dropdown-item" href="Medical Services.html">Medical Services</a></li>
                                <li><a class="dropdown-item" href="ICSR End To End Case Processing.html">ICSR End To End Case Processing</a></li>
                                <li><a class="dropdown-item" href="MICC.html">Medical Information And Call Center (MICC)</a></li>
                                <li><a class="dropdown-item" href="PSMF.html">Pharmacovigilance System Master File (PSMF)</a></li>
                                <li><a class="dropdown-item" href="locallliteraturesearch.html">Local Literature Search</a></li>
                                <li><a class="dropdown-item" href="globalliteraturesearch.html">Global Literature Search</a></li>
                                <li><a class="dropdown-item" href="SDEA Services.html">SDEA Services</a></li>
                                <li><a class="dropdown-item" href="Regulatory Intelligence In PV.html">Regulatory Intelligence In PV</a></li>
                                <li><a class="dropdown-item" href="PVServices.html">PV Services For Distributors</a></li>
                                <li><a class="dropdown-item" href="ICSR Collection Services.html">ICSR Collection Services 24/7</a></li>
                                <li><a class="dropdown-item" href="Medical Device Service Support.html">Medical Device Service Support</a></li>
                                <li><a class="dropdown-item" href="DOSSIER.html">DOSSIER Preparation And Regulatory Affairs Services</a></li>
                                <li><a class="dropdown-item" href="QPPVandLocalContact.html">QPPV And Local Contact Person For Pharmacovigilance</a></li>
                                <li><a class="dropdown-item" href="GVPAudits.html">GVP Audits/Inspection Preparedness</a></li>
                                <li><a class="dropdown-item" href="Drug Safety Mailbox Management.html">Drug Safety Mailbox Management</a></li>
                            </ul>
                        </li>
                          <li class="nav-item"><a class="nav-link nav-link-career" href="career1.html">Career</a></li>
                          <li class="nav-item"><a class="nav-link" href="ContactUs1.html">Contact Us</a></li>
                        <ul class="navbar-nav ms-auto d-flex align-items-center">
                          <li class="nav-item ms-2"><a href="enquiry.html" class="theme-btn btn-style-one"><span class="txt">Enquiry Now</span></a></li>
                       </ul>
                       
                      </ul>
                </div>
            </div>
        </nav>   
    </header>

    <!-- Main Slider Section -->   
<section class="main-slider" style="margin-bottom: 40px;">
  <div class="owl-carousel main-slider-carousel">
    <div class="slide">
      <div class="image-layer" style="background-image: url('https://i.postimg.cc/vBbs0nRv/image.png'); min-height: 230px; background-size:cover; background-position:center; border-radius:19px;">
        <div class="container h-100 d-flex align-items-center justify-content-center">
        </div>
      </div>
    </div>
    <div class="slide">
      <div class="image-layer" style="background-image: url('https://i.postimg.cc/zDLr0866/image.png'); min-height: 230px; background-size:cover; background-position:center; border-radius:18px;">
        <div class="container h-100 d-flex align-items-center justify-content-center">
          <div class="content text-center bg-opacity-75 p-4 rounded-4 shadow">
            <h2 class="mb-2">Advanced Case Management</h2>
            <p>Comprehensive solutions for the pharmaceutical industry</p>
          </div>
        </div>
      </div>
    </div>
    <div class="slide">
      <div class="image-layer" style="background-image: url('https://globalforum.diaglobal.org/wp-content/uploads/2022/03/dia-pharmacovigilance-2022-icon.jpg'); min-height: 230px; background-size:cover; background-position:center; border-radius:18px;">
        <div class="container h-100 d-flex align-items-center justify-content-center">
          <div class="content text-center  bg-opacity-75 p-4 rounded-4 shadow">
            <h2 class="mb-2">Your Trusted Pharmacovigilance Partner</h2>
            <p>Delivering excellence in drug safety and compliance</p>
          </div>
        </div>
      </div>
    </div>
    <div class="slide">
      <div class="image-layer" style="background-image: url('https://i.postimg.cc/sxBsWrCF/image.png'); min-height: 230px; background-size:cover; background-position:center; border-radius:18px;">
        <div class="container h-100 d-flex align-items-center justify-content-center">
          <div class="content text-center bg-opacity-75 p-4 rounded-4 shadow">
            <h2 class="mb-2">Empowering Pharmacovigilance</h2>
            <p>Innovative solutions for a safer healthcare environment</p>
          </div>
        </div>
      </div>
  </div>
</section>
        <!-- Services Section -->
    <section id="services" class="service-page">
        <div class="container">
            <div class="row">
                <div class="col-12">
                    <div class="sec-title wow fadeInUp" data-wow-duration="1000ms">
                        <h2 class="sec-title__title">Our Services</h2>
                    </div>
                </div>
            </div>
            <div class="row gutter-y-30">
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="190ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="pvsystemandSOPsServices.html">PV System and SOP’s</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-file-medical"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://i.postimg.cc/XJxnmSGB/case4.jpg" alt="PV System and SOP’s">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                 <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="390ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="pvconsultancy.html">PV Consultancy</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-comments"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://i.postimg.cc/8c5fnb5D/case5.jpg" alt="PV Consultancy" style="width: 330px; height: 250px; object-fit: cover; border-radius: 12px; display: block; margin: 0 auto; margin-left: -20px;">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="590ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="AggregateReports.html">Aggregate Reports</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-user-md"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://i.postimg.cc/W3dpxprF/image.png" alt="Aggregate Reporting" style="height: 350px; margin-top: -55px;">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="190ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="MedicalServices.html">Medical Services</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-clipboard-check"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://i.postimg.cc/sXBvYg0D/case3.jpg" alt="Medical Services">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                  <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="390ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="ICSR End To End Case Processing.html">ICSR end to end case processing </a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-chart-line"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://i.postimg.cc/s2QnbpMY/case2.jpg" alt="ICSR end to end case processing" style="width: -30px; height: -50px; object-fit: cover; border-radius: 12px; display: block; margin: 0 auto; margin-left: -20px;">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
               
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="590ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="MICC.html">Medical information and call center (MICC)</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-cogs"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://i.postimg.cc/QNbq466L/case6.jpg" alt="Medical information and call center (MICC)">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
        <div class="row">
            <div class="col-12 text-center mt-4">
                <a class="Discover" href="allservices.html">Discover all Services</a>
            </div>
        </div>
    </section><!-- Contact Section -->
    <!-- Include Google Fonts (Optional) -->
<link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;600&display=swap" rel="stylesheet">


<div class="why-section">
    <h2>Why Sojar?</h2>
    <p class="description">
        Sojar stands out as a trusted partner in Pharmacovigilance by offering 
        comprehensive, end-to-end safety solutions tailored to the needs of
         pharmaceutical and biopharmaceutical companies.</p>

<div class="stats-container">
  <div class="stat-box">
    <div class="stat-number" data-target="50000" data-suffix="K">0K</div>
    <div class="stat-label">ICSRs<br>Processed</div>
  </div>
  <div class="stat-box">
    <div class="stat-number" data-target="230" data-suffix="+">0+</div>
    <div class="stat-label">Aggregate<br>Reports</div>
  </div>
  <div class="stat-box">
    <div class="stat-number" data-target="250" data-suffix="+">0+</div>
    <div class="stat-label">Safety<br>Signals</div>
  </div>
  <div class="stat-box">
    <div class="stat-number" data-target="300" data-suffix="+">0+</div>
    <div class="stat-label">Literature<br>Surveillance</div>
  </div>
</div>
    <a href="whysojar.html" class="find-out-btn">Find out more</a>
</div>
<!-- // end  -->


    <section id="contact" class="contact-info-section">
        <div class="auto-container">
            <!-- Sec Title -->
    </section>
    
    <!-- Footer start-->
   <footer class="main-footer">
    <!-- Background Patterns -->
    <div class="pattern-layer-one" style="background-image: url('public/new-assets/images/background/pattern-7.png')"></div>
    <div class="pattern-layer-two" style="background-image: url('public/new-assets/images/background/pattern-8.png')"></div>

    <div class="auto-container">
        <!-- Widgets Section -->
        <div class="widgets-section">
            <div class="row clearfix align-items-start">
                <!-- Logo -->
                <div class="footer-column col-lg-3 col-md-6 col-sm-12">
                    <div class="footer-widget logo-widget">
            <a href="web.html"style="display: flex; margin-left: -20px;">
               <img src="https://i.postimg.cc/d3hYgnfm/SOJAR-Copy.png" alt="" title="" style="width: 200px;"> </a>

                        <div class="copyright" style="font-size: 12px; margin-top: 34px;margin-left: -20px;">
                            © 2025 Sojar Research Services Pvt. Ltd.<br>All Rights Reserved
                        </div>
                        <!-- i want this span to bottom of the page -->
                        <div class="social-neumorphic mt-2"style="margin-top: 28px;margin-left: -29px;margin-bottom: -30px;">
                           <a href="https://wa.me/918793939229" target="_blank" class="neu-button"><i class="fab fa-whatsapp"></i></a>
                           <a href="https://mail.google.com/mail/?view=cm&to=info@sojarresearch.com" target="_blank" class="neu-button">
                             <i class="fas fa-envelope"></i>
                            </a>
                                         <script>
                                             function showEmailWarning() {
                                                alert("If your email did not open, please set a default email app in your system settings.");
                                                }
                                         </script>
                            <a href="https://www.linkedin.com/company/sojar-research-services-pvt-ltd/?originalSubdomain=in" target="_blank" class="neu-button"><i class="fab fa-linkedin-in"></i></a>
                            <a href="https://www.facebook.com/people/Sojar-Rspl/pfbid02kvh2U89kUXduVTiTx5J256YUFQ7ye6eaXguk6yri3X5QbJ2HZzJo4fFCewNwvBYrl/" target="_blank" class="neu-button"><i class="fab fa-facebook-f"></i></a>
                        </div>
                    </div>
                </div>

                <!-- Quick Links -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget links-widget">
                        <h5>Quick Links</h5>
                        <ul class="list-link list-double-arrow">
                            <li><a href="web.html">Home</a></li>
                            <li><a href="abt.html">About Us</a></li>
                            <li><a href="allservices.html">Services</a></li>
                            <li><a href="career1.html">Career</a></li>
                           <li><a href="ContactUs1.html">Contact Us</a></li>
                            <li><a href="enquiry.html">Enquiry Now</a></li>
                        </ul>
                    </div>
                </div>

                <!-- Our Services -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget links-widget"style="margin-left: -55px;">
                        <h5>Services and Solutions</h5>
                        <ul class="list-link list-double-arrow" >
                            <li><a href="pvsystemandSOPsServices.html">PV System and SOP’s</a></li>
                            <li><a href="AggregateReports.html">Aggregate Reports</a></li>
                            <li><a href="SDEA Services.html">SDEA Services</a></li>
                            <li><a href="PVServices.html">PV Services for distributors</a></li>
                            <li><a href="pvconsultancy.html">PV Consultancy</a></li>
                            <li><a href="Medical Services.html">Medical Services</a></li>
                        </ul>
                       <a href="allservices.html" class="view-all-services-btn">View All Services</a>
                    </div>
                </div>
                 
                <!-- Address -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget contact-widget"style="margin-left: -55px;">
                        <h5>Contact Us</h5>
                        <ul>
                            <li><span class="icon fa fa-map-marker"></span><strong>Address</strong> Office 201, Creative's Orchid,<br>Hinjawadi-Punawale Link Road,<br> Beside Lotus Business School.<br> Pune- 411033 <br>Maharashtra (India).</li>
                            <br>
                            <li><span class="icon fa fa-phone"></span><strong>Phone</strong> <a href="tel:+91 8793 939 229">+91 8793 939 229</a></li>
                        </ul>
                    </div>
                </div>

                <!-- Map: Moved Slightly Left -->
                <div class="footer-column col-lg-3 col-md-6 col-sm-12" style="margin-left: -48px;">
                    <div class="footer-widget footer-widget--time">
                        <h5 class="footer-widget__title">Location Map</h5>
                        <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3780.676559266706!2d73.73748347489511!3d18.63361216571207!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bc2b945a1da9fd9%3A0xd217090176788f8!2sSojar%20Research%20Services%20Private%20Limited!5e0!3m2!1sen!2sin!4v1747224613164!5m2!1sen!2sin"
                            width="133%" height="200" style="border:0;margin-left: -42px;" allowfullscreen="" loading="lazy"
                            referrerpolicy="no-referrer-when-downgrade"></iframe>
                    </div>
                </div>
            </div>
        </div>
    </div>
</footer>
    <!-- Scripts -->    <script src="https://code.jquery.com/jquery-3.7.0.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/owl.carousel.min.js"></script>
    <!-- Wow.js -->
    <script src="https://cdnjs.cloudflare.com/ajax/libs/wow/1.1.2/wow.min.js"></script>
    <script src="web.js"></script>

    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/owl.carousel.min.js"></script>
</body>
</html>