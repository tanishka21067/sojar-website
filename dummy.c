<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sojar Research - Pharmacovigilance Solutions</title>
    <!-- Favicon -->
    <link rel="icon" type="image/png" href="assets/images/favicon.png">
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

    <style>
/* Container for dropdown */
ul.dropdown-menu {
    list-style: none;
    margin: 0;
    padding: 8px 0;
    background: #ffffff;
    border: 1px solid #e0e0e0;
    border-radius: 12px;
    box-shadow: 0 8px 24px rgba(0, 0, 0, 0.1);
    width: 220px;
    transition: all 0.3s ease-in-out;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
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
    background-color: #34991b;
    color: #ffffff;
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

</style>

</head>
<body>
    <!-- Header Section -->    <header class="main-header">        <div class="topbar">
            <div class="container">
                <div class="row align-items-center">
                    <!-- <div class="col-lg-6">
                        <div class="left-content">
                            <p><i class="icon-clock"></i> Mon - Fri: 9:00 - 18:00</p>
                        </div>
                    </div> -->
                    <div class="col-lg-6">
                        <div class="right-content">
                            <a href="tel:+912266155700"><i class="icon-telephone-call-1"></i> +91 22 6615 5700</a>
                            <a href="mailto:info@sojarresearch.com"><i class="icon-email"></i> info@sojarresearch.com</a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <nav class="navbar navbar-expand-lg">
            <div class="container">
                <a class="navbar-brand" href="#">
                    <img src="assets/images/logo.png" alt="Sojar Research">
                </a>
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav">
                    <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarNav">
                    <ul class="navbar-nav ms-auto">                        <li class="nav-item"><a class="nav-link active" href="#home">Home</a></li>
                        <li class="nav-item"><a class="nav-link" href="#about">About Us</a></li>                        <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown">Services</a>
                            <ul class="dropdown-menu">
                                <li><a class="dropdown-item" href="#">Case Processing</a></li>
                                 <li><a class="dropdown-item" href="#">PV Consultancy</a></li>
                                <li><a class="dropdown-item" href="#">Medical Services</a></li>
                                <li><a class="dropdown-item" href="#">Periodic Safety Reports</a></li>
                                <li><a class="dropdown-item" href="#">Market Intelligence</a></li>
                                <li><a class="dropdown-item" href="#">PV System Management</a></li>
                            </ul>
                        </li>
                        <li class="nav-item"><a class="nav-link" href="#contact">Contact Us</a></li>
                        <li class="nav-item ms-2"><a href="enquiry.html" class="theme-btn btn-style-one"><span class="txt">Enquiry Now</span></a></li>
                    </ul>
                </div>
            </div>
        </nav>    </header>

    <!-- Main Slider Section -->    <section class="main-slider">
        <div class="owl-carousel main-slider-carousel">            <!-- Slide 1 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/pharmaco1.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Leading Pharmacovigilance Solutions</h2>
                            <p>Ensuring drug safety through comprehensive monitoring and analysis</p>
                            <a href="#services" class="btn btn-primary">Our Services</a>
                        </div>
                    </div>
                </div>
            </div>            <!-- Slide 2 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/pharmaco2.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Expert Medical Analysis</h2>
                            <p>Professional healthcare monitoring and reporting services</p>
                            <a href="#contact" class="btn btn-primary">Contact Us</a>
                        </div>
                    </div>
                </div>
            </div>            <!-- Slide 3 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/slide3.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Global Compliance Standards</h2>
                            <p>Meeting international safety regulations and guidelines</p>
                            <a href="#about" class="btn btn-primary">Learn More</a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>    <!-- Services Section -->
    <section id="services" class="service-page" style="background-image: url('public/assets/images/shapes/service-shape-1-1.png');">
        <div class="container">
            <div class="row">
                <div class="col-12">
                    <div class="sec-title wow fadeInUp" data-wow-duration="1000ms">
                        <div class="sec-title__tagline">Our Services</div>
                        <h2 class="sec-title__title">Comprehensive Pharmacovigilance Solutions</h2>
                    </div>
                </div>
            </div>
            <div class="row gutter-y-30">
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="200ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Case Management</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-file-medical"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/case.jpg" alt="Case Management">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                 <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="400ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">PV Consultancy</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-comments"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/pv-consultancy.jpg" alt="PV Consultancy">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="600ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Medical Services</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-user-md"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://images.hindustantimes.com/img/2024/08/14/550x309/In-a-show-of-solidarity-and-demand-for-justice--th_1723655748492.jpg" alt="Medical Services">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="200ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Periodic Safety Reports</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-clipboard-check"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/periodic-safety-report.jpg" alt="Periodic Safety Reports">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                  <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="400ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Market Intelligence</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-chart-line"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/market-intelligence.jpg" alt="Market Intelligence">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
               
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="600ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">PV System Management</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-cogs"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/pv-sysytem-management.jpg" alt="PV System Management">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section><!-- Contact Section -->
    <!-- Include Google Fonts (Optional) -->
<link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;600&display=swap" rel="stylesheet">

<style>
.why-section {
    font-family: 'Inter', sans-serif;
    background: linear-gradient(to right, #f9f9f9, #ffffff);
    padding: 60px 20px;
    text-align: center;
    border-radius: 20px;
    box-shadow: 0 8px 24px rgba(0, 0, 0, 0.05);
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
    background: #f0f6ff;
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
    background-color: #f17a35;
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
</style>

<div class="why-section">
    <h2>Why Sojar?</h2>
    <p class="description">
        Sojar stands out as a trusted partner in Pharmacovigilance by offering 
        comprehensive, end-to-end safety solutions tailored to the needs of
         pharmaceutical and biopharmaceutical companies.</p>

  

<style>
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
    background: #f0f6ff;
    padding: 24px 20px;
    border-radius: 16px;
    width: 200px;
    text-align: center;
    box-shadow: 0 6px 18px rgba(0, 0, 0, 0.08);
    transition: transform 0.2s ease;
}

.stat-box:hover {
    transform: translateY(-6px);
}

.stat-number {
    font-size: 28px;
    font-weight: 600;
    color: #f5733b;
    margin-bottom: 10px;
}

.stat-label {
    font-size: 14px;
    color: #444;
    line-height: 1.4;
}
</style>
<script>
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
</script>


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
    <a href="#" class="find-out-btn">Find out more</a>
</div>
<!-- // end  -->


    <section id="contact" class="contact-info-section">
        <div class="auto-container">
            <!-- Sec Title -->
          


    </section><!-- Footer start-->

    <footer class="main-footer">
    <!-- Background Patterns -->
    <div class="pattern-layer-one" style="background-image: url('public/new-assets/images/background/pattern-7.png')"></div>
    <div class="pattern-layer-two" style="background-image: url('public/new-assets/images/background/pattern-8.png')"></div>

    <div class="auto-container">
        <!-- Widgets Section -->
        <div class="widgets-section">
            <div class="row clearfix">
                <!-- Left Column -->
                <div class="big-column col-lg-6 col-md-12 col-sm-12">
                    <div class="row clearfix">
                        <!-- About Us -->
                        <div class="footer-column col-lg-7 col-md-6 col-sm-12">
                            <div class="footer-widget logo-widget">
                                <div class="logo">
                                    <h5>About Us</h5>
                                </div>
                                <div class="text">
                                   We deliver efficient, cutting-edge, and<br> compliant Pharmacovigilance solutions for<br> pharmaceutical and biopharmaceutical companies,<br> ensuring patient safety and regulatory compliance.
                                </div>  
                                <br>
                                  <div class="copyright">
                            © 2022 Sojar Research Services Pvt. Ltd. | All Rights Reserved
                        </div>
                         <div class="social-neumorphic">
    <a href="https://instagram.com" target="_blank" class="neu-button"><i class="fab fa-instagram"></i></a>
    <a href="mailto:info@sojarresearch.com" class="neu-button"><i class="fas fa-envelope"></i></a>
    <a href="https://linkedin.com" target="_blank" class="neu-button"><i class="fab fa-linkedin-in"></i></a>
    <a href="https://facebook.com" target="_blank" class="neu-button"><i class="fab fa-facebook-f"></i></a>
</div>

                            </div>
                        </div>

                        <!-- Quick Links -->
                        <div class="footer-column col-lg-5 col-md-6 col-sm-12">
                            <div class="footer-widget links-widget">
                                <h5>Quick Links</h5>
                                <ul class="list-link list-double-arrow">
                                    <li><a href="index.html">Home</a></li>
                                    <li><a href="about.html">Company Overview</a></li>
                                    <li><a href="product-list.html">Pharmacovigilance</a></li>
                                    <li><a href="services.html">Our Services</a></li>
                                    <li><a href="enquiry.html">Enquiry Now</a></li>
                                    <li><a href="contact.html">Contact Us</a></li>
                                </ul>
                            </div>
                        </div>
                    </div>
                </div>

                <!-- Right Column -->
                <div class="big-column col-lg-6 col-md-12 col-sm-12">
                    <div class="row clearfix">
                        <!-- Our Services -->
                        <div class="footer-column col-lg-6 col-md-6 col-sm-12">
                            <div class="footer-widget links-widget">
                                <h5>Our Services</h5>
                                <ul class="list-link list-double-arrow">
                                    <li><a href="pv-consultancy.html">PV Consultancy</a></li>
                                    <li><a href="medical-services.html">Medical Services</a></li>
                                    <li><a href="periodic-safety-reports.html">Periodic Safety Reports</a></li>
                                    <li><a href="case-management.html">Case Management</a></li>
                                    <li><a href="market-intelligence.html">Market Intelligence</a></li>
                                    <li><a href="pv-system-management.html">PV System Management</a></li>
                                </ul>
                            </div>
                        </div>

                        <!-- Contact Info -->
                        <div class="footer-column col-lg-6 col-md-6 col-sm-12">
                            <div class="footer-widget contact-widget">
                                <h5> Address</h5>
                                <ul>
                                    <li>
                                        <span class="icon flaticon-placeholder-2"></span>
                                       
                                        Office 201, Creative’s Orchid, Hinjawadi-Punawale <br>
                                        Link Road, Beside Lotus Business School.<br>Pune-411033, Maharashtra (India)
                                    </li>
                                    
                                </ul>
                            </div>
                        </div>
                    </div>
                </div> <!-- End Right Column -->
          

        <!-- Footer Bottom -->
        <div class="footer-bottom">
            <div class="auto-container">
                <div class="row clearfix">
                    <div class="column col-lg-6 col-md-12 col-sm-12">
                        <!-- <div class="copyright">
                            © 2022 Sojar Research Services Pvt. Ltd. | All Rights Reserved
                        </div>
                         <div class="social-neumorphic">
    <a href="https://instagram.com" target="_blank" class="neu-button"><i class="fab fa-instagram"></i></a>
    <a href="mailto:info@sojarresearch.com" class="neu-button"><i class="fas fa-envelope"></i></a>
    <a href="https://linkedin.com" target="_blank" class="neu-button"><i class="fab fa-linkedin-in"></i></a>
    <a href="https://facebook.com" target="_blank" class="neu-button"><i class="fab fa-facebook-f"></i></a>
</div> -->
                    </div>
                
                <div class="col-md-6 col-xl-5">
                        <div class="footer-widget footer-widget--time">
                            <h4 class="footer-widget__title">Location Map</h4>
                            <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3780.676559266706!2d73.73748347489511!3d18.63361216571207!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bc2b945a1da9fd9%3A0xd217090176788f8!2sSojar%20Research%20Services%20Private%20Limited!5e0!3m2!1sen!2sin!4v1747224613164!5m2!1sen!2sin" width="100%" height="300" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe>
                        </div>
                    </div>
                    
               
        </div>        
  </div>
        </div>
            </div>
        </div>
    </div>
</footer>


   <!-- Footer start-->

    <!-- Scripts -->    <script src="https://code.jquery.com/jquery-3.7.0.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/owl.carousel.min.js"></script>
    <!-- Wow.js -->
    <script src="https://cdnjs.cloudflare.com/ajax/libs/wow/1.1.2/wow.min.js"></script>
    <script src="web.js"></script>
</body>
</html>




<!-- 
<div class="col-md-6 col-xl-5">
                        <div class="footer-widget footer-widget--time">
                            <h4 class="footer-widget__title">Location Map</h4>
                            <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3780.676559266706!2d73.73748347489511!3d18.63361216571207!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bc2b945a1da9fd9%3A0xd217090176788f8!2sSojar%20Research%20Services%20Private%20Limited!5e0!3m2!1sen!2sin!4v1747224613164!5m2!1sen!2sin" width="100%" height="300" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe>
                        </div>
                    </div>

 <div class="social-neumorphic">
    <a href="https://instagram.com" target="_blank" class="neu-button"><i class="fab fa-instagram"></i></a>
    <a href="mailto:info@sojarresearch.com" class="neu-button"><i class="fas fa-envelope"></i></a>
    <a href="https://linkedin.com" target="_blank" class="neu-button"><i class="fab fa-linkedin-in"></i></a>
    <a href="https://facebook.com" target="_blank" class="neu-button"><i class="fab fa-facebook-f"></i></a>
</div> -->













<!-- 
<footer class="main-footer main-footer--one">
            <div class="main-footer__inner">
                <div class="container">
                    <div class="row">

                       
                        <div class="col-md-6 col-xl-2">
                            <div class="footer-widget footer-widget--link">
                                <h4 class="footer-widget__title">Our Services</h4>
                                <ul class="list-unstyled footer-widget__links">
                                    <li class="footer-widget__links__item"><a href="#">Case Management</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Market Intelligence</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Medical Services</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Periodic Safety Reports</a></li>
                                    <li class="footer-widget__links__item"><a href="#">PV Consultancy</a></li>
                                    <li class="footer-widget__links__item"><a href="#">PV System Management</a></li>
                                </ul> <!-- /.list-unstyled footer-widget__links -->
                            </div><!-- /.footer-widget -->
                        </div><!-- /.col-md-6 -->
   <div class="col-md-6 col-xl-2">
                            <div class="footer-widget footer-widget--link">
                                <h4 class="footer-widget__title">Links</h4>
                                <ul class="list-unstyled footer-widget__links">
                                    <li class="footer-widget__links__item"><a href="#">Home</a></li>
                                    <li class="footer-widget__links__item"><a href="#">About Us</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Gallery</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Clients</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Career</a></li>
                                    <li class="footer-widget__links__item"><a href="#">Contact Us</a></li>
                                </ul><!-- /.list-unstyled footer-widget__links -->
                            </div><!-- /.footer-widget -->
                        </div><!-- /.col-md-6 -->
                        <div class="col-md-6 col-xl-3">
                            <div class="footer-widget footer-widget--about">
                                <h4 class="footer-widget__title">Contact</h4>
                                <ul class="list-unstyled footer-widget__info">
                                    <li class="footer-widget__info__item"> <span class="footer-widget__info__item__text">Office 201, Creative’s Orchid, Hinjawadi-Punawale Link Road, Beside Lotus Business School. Pune- 411033 Maharashtra (India).</span></li>
                                    <li class="footer-widget__info__item"> <i class="icon-telephone-call-1" aria-hidden="true"></i> <a href="tel:+91 8793939229">+91 8793939229</a>
                                    </li>
                                    <li class="footer-widget__info__item"> <i class="icon-email" aria-hidden="true"></i>
                                        <a href="mailto:info@sojarresearch.com">info@sojarresearch.com</a>
                                    </li>
                                </ul><!-- /.list-unstyled -->
                                
                            </div><!-- /.footer-widget -->
                        </div><!-- /.col-md-6 -->

                        <div class="col-md-6 col-xl-5">
                            <div class="footer-widget footer-widget--time">
                                <h4 class="footer-widget__title">Location Map</h4>
                               <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3780.676559266706!2d73.73748347489511!3d18.63361216571207!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bc2b945a1da9fd9%3A0xd217090176788f8!2sSojar%20Research%20Services%20Private%20Limited!5e0!3m2!1sen!2sin!4v1747224613164!5m2!1sen!2sin" width="100%" height="230" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe>
                            </div><!-- /.footer-widget -->
                        </div><!-- /.col-md-6 -->
                    </div><!-- /.row -->
                </div><!-- /.container -->
            </div><!-- /.main-footer__middle -->

            <div class="main-footer__bottom">
                <div class="container">
                    <div class="main-footer__bottom__inner">
                        <div class="row  align-items-center">
                    <div class="col-md-6 pt-2">
                        <p class="copyright-text text-center">Copyright <i class="fal fa-copyright"></i> 2025 <a href="#">Sojar Research Service Pvt. Ltd.</a> All Rights Reserved.</p>
                    </div>
                    <div class="col-md-6  pt-2">
                        <p class="copyright-text text-center"> Designed &amp; Developed By
                            <a href="https://www.weblinkservices.net/" target="_blank"><img src="images/wlspl_logo.png" width="130"></a>
                        </p>
                    </div>
                </div>
                    </div><!-- /.main-footer__inner -->
                </div><!-- /.container -->
            </div><!-- /.main-footer__bottom -->
            <div class="main-footer__shape">
                <img src="assets/images/shapes/footer-shape-1-1.png" alt="">
            </div>
            <div class="main-footer__shape main-footer__shape--two">
                <img src="assets/images/shapes/footer-shape-1-2.png" alt="">
            </div>

        </footer> -->












        <!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Sojar Research - Pharmacovigilance Solutions</title>

  <!-- Favicon -->
  <link rel="icon" type="image/png" href="assets/images/favicon.png" />

  <!-- Bootstrap CSS -->
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet" />

  <!-- Google Material Icons -->
  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">

  <!-- Custom CSS -->
  <link rel="stylesheet" href="web.css" />
  <link rel="stylesheet" href="css/service-page.css" />

  <!-- Font Awesome -->
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css" />

  <!-- Owl Carousel -->
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/assets/owl.carousel.min.css" />

  <!-- Animate CSS -->
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/animate.css/4.1.1/animate.min.css" />

  <!-- Icomoon -->
  <link rel="stylesheet" href="assets/fonts/icomoon/style.css" />

  <style>
    ul.dropdown-menu {
      list-style: none;
      margin: 0;
      padding: 8px 0;
      background: #ffffff;
      border: 1px solid #e0e0e0;
      border-radius: 12px;
      box-shadow: 0 8px 24px rgba(0, 0, 0, 0.1);
      width: 220px;
      transition: all 0.3s ease-in-out;
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    }

    ul.dropdown-menu li {
      padding: 0;
    }

    ul.dropdown-menu .dropdown-item {
      display: block;
      padding: 10px 18px;
      color: #333;
      text-decoration: none;
      font-size: 15px;
      border-radius: 6px;
      transition: background 0.2s ease, color 0.2s ease;
    }

    ul.dropdown-menu .dropdown-item:hover {
      background-color: #34991b;
      color: #ffffff;
    }

    /* Clean menu icon */
    #leftMenuIcon {
      background: none;
      border: none;
      font-size: 26px;
      cursor: pointer;
      color: #333;
      padding: 0;
    }

    /* Sidebar Styles */
    #sidebarMenu {
      position: fixed;
      top: 0;
      left: -260px;
      width: 250px;
      height: 100%;
      background-color: #f8f9fa;
      box-shadow: 2px 0 8px rgba(0,0,0,0.15);
      z-index: 1050;
      padding: 20px;
      transition: left 0.3s ease-in-out;
    }

    #sidebarMenu.active {
      left: 0;
    }

    #sidebarMenu a {
      display: flex;
      align-items: center;
      margin: 12px 0;
      color: #333;
      font-size: 16px;
      text-decoration: none;
    }

    #sidebarMenu a .material-icons {
      margin-right: 10px;
    }

    #sidebarMenu a:hover {
      color: #0d6efd;
    }

    .overlay {
      position: fixed;
      top: 0;
      left: 0;
      width: 0;
      height: 100%;
      background-color: rgba(0,0,0,0.3);
      transition: 0.3s ease;
      z-index: 1049;
    }

    .overlay.active {
      width: 100%;
    }
  </style>
</head>
<body>

  <!-- Header Section -->
  <header class="main-header">
    <!-- Topbar -->
    <div class="topbar">
      <div class="container">
        <div class="row align-items-center">
          <div class="col-lg-6 ms-auto">
            <div class="right-content text-end">
              <a href="tel:+912266155700"><i class="icon-telephone-call-1"></i> +91 22 6615 5700</a>
              <a href="mailto:info@sojarresearch.com"><i class="icon-email"></i> info@sojarresearch.com</a>
            </div>
          </div>
        </div>
      </div>
    </div>

    <!-- Navbar -->
    <nav class="navbar navbar-expand-lg">
      <div class="container d-flex align-items-center justify-content-between">

        <!-- Left Menu Icon -->
        <button id="leftMenuIcon" class="d-lg-block d-md-block d-none"><span class="material-icons">menu</span></button>

        <!-- Logo -->
        <a class="navbar-brand d-flex align-items-center" href="#">
          <img src="assets/images/logo.png" alt="Sojar Research" height="50" />
        </a>

        <!-- Toggler for mobile -->
        <button class="navbar-toggler ms-auto" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav">
          <span class="navbar-toggler-icon"></span>
        </button>

        <!-- Navbar links -->
        <div class="collapse navbar-collapse" id="navbarNav">
          <ul class="navbar-nav ms-auto align-items-lg-center">
            <li class="nav-item">
              <a class="nav-link active" href="#home"><span class="material-icons">home</span> Home</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#about"><span class="material-icons">person</span> About Us</a>
            </li>
            <li class="nav-item dropdown">
              <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown">
                <span class="material-icons">miscellaneous_services</span> Services
              </a>
              <ul class="dropdown-menu">
                <li><a class="dropdown-item" href="#"><span class="material-icons">assignment</span> Case Processing</a></li>
                <li><a class="dropdown-item" href="#"><span class="material-icons">psychology</span> PV Consultancy</a></li>
                <li><a class="dropdown-item" href="#"><span class="material-icons">medical_services</span> Medical Services</a></li>
                <li><a class="dropdown-item" href="#"><span class="material-icons">insert_chart</span> Periodic Safety Reports</a></li>
                <li><a class="dropdown-item" href="#"><span class="material-icons">insights</span> Market Intelligence</a></li>
                <li><a class="dropdown-item" href="#"><span class="material-icons">settings</span> PV System Management</a></li>
              </ul>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#contact"><span class="material-icons">contact_mail</span> Contact Us</a>
            </li>
            <li class="nav-item ms-2">
              <a href="enquiry.html" class="theme-btn btn-style-one">
                <span class="material-icons">send</span> <span class="txt">Enquiry Now</span>
              </a>
            </li>
          </ul>
        </div>
      </div>
    </nav>
  </header>

  <!-- Sidebar -->
  <div id="sidebarMenu">
    <h5>Navigation</h5>
    <a href="#home"><span class="material-icons">home</span> Home</a>
    <a href="#about"><span class="material-icons">person</span> About Us</a>
    <a href="#"><span class="material-icons">miscellaneous_services</span> Services</a>
    <a href="#contact"><span class="material-icons">contact_mail</span> Contact Us</a>
    <a href="enquiry.html"><span class="material-icons">send</span> Enquiry Now</a>
  </div>
  <div class="overlay" id="sidebarOverlay"></div>

  <!-- Bootstrap Bundle with Popper -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>

  <!-- Sidebar Toggle Script -->
  <script>
    const leftMenuIcon = document.getElementById("leftMenuIcon");
    const sidebar = document.getElementById("sidebarMenu");
    const overlay = document.getElementById("sidebarOverlay");

    leftMenuIcon.addEventListener("click", () => {
      sidebar.classList.add("active");
      overlay.classList.add("active");
    });

    overlay.addEventListener("click", () => {
      sidebar.classList.remove("active");
      overlay.classList.remove("active");
    });
  </script>



    <!-- Main Slider Section -->    <section class="main-slider">
        <div class="owl-carousel main-slider-carousel">            <!-- Slide 1 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/pharmaco1.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Leading Pharmacovigilance Solutions</h2>
                            <p>Ensuring drug safety through comprehensive monitoring and analysis</p>
                            <a href="#services" class="btn btn-primary">Our Services</a>
                        </div>
                    </div>
                </div>
            </div>            <!-- Slide 2 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/pharmaco2.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Expert Medical Analysis</h2>
                            <p>Professional healthcare monitoring and reporting services</p>
                            <a href="#contact" class="btn btn-primary">Contact Us</a>
                        </div>
                    </div>
                </div>
            </div>            <!-- Slide 3 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/slide3.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Global Compliance Standards</h2>
                            <p>Meeting international safety regulations and guidelines</p>
                            <a href="#about" class="btn btn-primary">Learn More</a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>    <!-- Services Section -->
    <section id="services" class="service-page" style="background-image: url('public/assets/images/shapes/service-shape-1-1.png');">
        <div class="container">
            <div class="row">
                <div class="col-12">
                    <div class="sec-title wow fadeInUp" data-wow-duration="1000ms">
                        <div class="sec-title__tagline">Our Services</div>
                        <h2 class="sec-title__title">Comprehensive Pharmacovigilance Solutions</h2>
                    </div>
                </div>
            </div>
            <div class="row gutter-y-30">
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="200ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Case Management</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-file-medical"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/case.jpg" alt="Case Management">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                 <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="400ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">PV Consultancy</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-comments"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/pv-consultancy.jpg" alt="PV Consultancy">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="600ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Medical Services</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-user-md"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://images.hindustantimes.com/img/2024/08/14/550x309/In-a-show-of-solidarity-and-demand-for-justice--th_1723655748492.jpg" alt="Medical Services">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="200ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Periodic Safety Reports</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-clipboard-check"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/periodic-safety-report.jpg" alt="Periodic Safety Reports">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                  <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="400ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Market Intelligence</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-chart-line"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/market-intelligence.jpg" alt="Market Intelligence">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
               
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="600ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">PV System Management</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-cogs"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/pv-sysytem-management.jpg" alt="PV System Management">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section><!-- Contact Section -->
    <!-- Include Google Fonts (Optional) -->
<link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;600&display=swap" rel="stylesheet">

<style>
.why-section {
    font-family: 'Inter', sans-serif;
    background: linear-gradient(to right, #f9f9f9, #ffffff);
    padding: 60px 20px;
    text-align: center;
    border-radius: 20px;
    box-shadow: 0 8px 24px rgba(0, 0, 0, 0.05);
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
    background: #f0f6ff;
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
    background-color: #f17a35;
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
</style>

<div class="why-section">
    <h2>Why Sojar?</h2>
    <p class="description">
        Sojar stands out as a trusted partner in Pharmacovigilance by offering 
        comprehensive, end-to-end safety solutions tailored to the needs of
         pharmaceutical and biopharmaceutical companies.</p>

  

<style>
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
    background: #f0f6ff;
    padding: 24px 20px;
    border-radius: 16px;
    width: 200px;
    text-align: center;
    box-shadow: 0 6px 18px rgba(0, 0, 0, 0.08);
    transition: transform 0.2s ease;
}

.stat-box:hover {
    transform: translateY(-6px);
}

.stat-number {
    font-size: 28px;
    font-weight: 600;
    color: #f5733b;
    margin-bottom: 10px;
}

.stat-label {
    font-size: 14px;
    color: #444;
    line-height: 1.4;
}
</style>
<script>
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
</script>


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
    <a href="#" class="find-out-btn">Find out more</a>
</div>
<!-- // end  -->


    <section id="contact" class="contact-info-section">
        <div class="auto-container">
            <!-- Sec Title -->
          


    </section><!-- Footer start-->

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
                        <a class="navbar-brand" href="#">
                            <img src="assets/images/logo.png" alt="Sojar Research" style="width: 140px; height: auto;">
                        </a>
                        <div class="copyright" style="font-size: 12px; margin-top: 10px;">
                            © 2022 Sojar Research Services Pvt. Ltd.<br>All Rights Reserved
                        </div>
                        <!-- i want this span to bottom of the page -->
                        <div class="social-neumorphic mt-2">
                            <a href="https://instagram.com" target="_blank" class="neu-button"><i class="fab fa-instagram"></i></a>
                            <a href="mailto:info@sojarresearch.com" class="neu-button"><i class="fas fa-envelope"></i></a>
                            <a href="https://linkedin.com" target="_blank" class="neu-button"><i class="fab fa-linkedin-in"></i></a>
                            <a href="https://facebook.com" target="_blank" class="neu-button"><i class="fab fa-facebook-f"></i></a>
                        </div>
                    </div>
                </div>

                <!-- Quick Links -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget links-widget">
                        <h5>Quick Links</h5>
                        <ul class="list-link list-double-arrow">
                            <li><a href="index.html">Home</a></li>
                            <li><a href="about.html">Company Overview</a></li>
                            <li><a href="product-list.html">Pharmacovigilance</a></li>
                            <li><a href="services.html">Our Services</a></li>
                            <li><a href="enquiry.html">Enquiry Now</a></li>
                            <li><a href="contact.html">Contact Us</a></li>
                        </ul>
                    </div>
                </div>

                <!-- Our Services -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget links-widget">
                        <h5>Our Services</h5>
                        <ul class="list-link list-double-arrow">
                            <li><a href="pv-consultancy.html">PV Consultancy</a></li>
                            <li><a href="medical-services.html">Medical Services</a></li>
                            <li><a href="periodic-safety-reports.html">Periodic Safety Reports</a></li>
                            <li><a href="case-management.html">Case Management</a></li>
                            <li><a href="market-intelligence.html">Market Intelligence</a></li>
                            <li><a href="pv-system-management.html">PV System Management</a></li>
                        </ul>
                    </div>
                </div>

                <!-- Address -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget contact-widget">
                        <h5>Address</h5>
                        <ul>
                            <li>
                                Office 201, Creative’s Orchid,<br> Hinjawadi–Punawale
                                Link <br>Road, Beside Lotus <br>Business School.
                                Pune–411033,<br> Maharashtra (India)
                            </li>
                        </ul>
                    </div>
                </div>

                <!-- Map: Moved Slightly Left -->
                <div class="footer-column col-lg-3 col-md-6 col-sm-12" style="margin-left: -20px;">
                    <div class="footer-widget footer-widget--time">
                        <h5 class="footer-widget__title">Location Map</h5>
                        <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3780.676559266706!2d73.73748347489511!3d18.63361216571207!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bc2b945a1da9fd9%3A0xd217090176788f8!2sSojar%20Research%20Services%20Private%20Limited!5e0!3m2!1sen!2sin!4v1747224613164!5m2!1sen!2sin"
                            width="105%" height="200" style="border:0;" allowfullscreen="" loading="lazy"
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
</body>
</html>











// code of webpage home real 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sojar Research - Pharmacovigilance Solutions</title>
    <!-- Favicon -->
    <link rel="icon" type="image/png" href="assets/images/favicon.png">
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

    <style>
/* Container for dropdown */
ul.dropdown-menu {
    list-style: none;
    margin: 0;
    padding: 8px 0;
    background: #ffffff;
    border: 1px solid #e0e0e0;
    border-radius: 12px;
    box-shadow: 0 8px 24px rgba(0, 0, 0, 0.1);
    width: 220px;
    transition: all 0.3s ease-in-out;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
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
    background-color: #34991b;
    color: #ffffff;
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

</style>

</head>
<body>
    <!-- Header Section -->    <header class="main-header">        <div class="topbar">
            <div class="container">
                <div class="row align-items-center">
                    <!-- <div class="col-lg-6">
                        <div class="left-content">
                            <p><i class="icon-clock"></i> Mon - Fri: 9:00 - 18:00</p>
                        </div>
                    </div> -->
                    <div class="col-lg-6">
                        <div class="right-content">
                            <a href="tel:+912266155700"><i class="icon-telephone-call-1"></i> +91 22 6615 5700</a>
                            <a href="mailto:info@sojarresearch.com"><i class="icon-email"></i> info@sojarresearch.com</a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <nav class="navbar navbar-expand-lg">
            <div class="container">
                <a class="navbar-brand" href="#">
                    <img src="assets/images/logo.png" alt="Sojar Research">
                </a>
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav">
                    <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarNav">
                    <ul class="navbar-nav ms-auto">                        <li class="nav-item"><a class="nav-link active" href="#home">Home</a></li>
                        <li class="nav-item"><a class="nav-link" href="#about">About Us</a></li>                        <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle" href="#" role="button" data-bs-toggle="dropdown">Services</a>
                            <ul class="dropdown-menu">
                                <li><a class="dropdown-item" href="#">Case Processing</a></li>
                                 <li><a class="dropdown-item" href="#">PV Consultancy</a></li>
                                <li><a class="dropdown-item" href="#">Medical Services</a></li>
                                <li><a class="dropdown-item" href="#">Periodic Safety Reports</a></li>
                                <li><a class="dropdown-item" href="#">Market Intelligence</a></li>
                                <li><a class="dropdown-item" href="#">PV System Management</a></li>
                            </ul>
                        </li>
                        <li class="nav-item"><a class="nav-link" href="#contact">Contact Us</a></li>
                        <li class="nav-item ms-2"><a href="enquiry.html" class="theme-btn btn-style-one"><span class="txt">Enquiry Now</span></a></li>
                    </ul>
                </div>
            </div>
        </nav>    </header>

    <!-- Main Slider Section -->    <section class="main-slider">
        <div class="owl-carousel main-slider-carousel">            <!-- Slide 1 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/pharmaco1.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Leading Pharmacovigilance Solutions</h2>
                            <p>Ensuring drug safety through comprehensive monitoring and analysis</p>
                            <a href="#services" class="btn btn-primary">Our Services</a>
                        </div>
                    </div>
                </div>
            </div>            <!-- Slide 2 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/pharmaco2.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Expert Medical Analysis</h2>
                            <p>Professional healthcare monitoring and reporting services</p>
                            <a href="#contact" class="btn btn-primary">Contact Us</a>
                        </div>
                    </div>
                </div>
            </div>            <!-- Slide 3 -->            <div class="slide">
                <div class="image-layer" style="background-image: url('public/assets/images/slider/slide3.jpg');">
                    <div class="container">
                        <div class="content">
                            <h2>Global Compliance Standards</h2>
                            <p>Meeting international safety regulations and guidelines</p>
                            <a href="#about" class="btn btn-primary">Learn More</a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section>    <!-- Services Section -->
    <section id="services" class="service-page" style="background-image: url('public/assets/images/shapes/service-shape-1-1.png');">
        <div class="container">
            <div class="row">
                <div class="col-12">
                    <div class="sec-title wow fadeInUp" data-wow-duration="1000ms">
                        <div class="sec-title__tagline">Our Services</div>
                        <h2 class="sec-title__title">Comprehensive Pharmacovigilance Solutions</h2>
                    </div>
                </div>
            </div>
            <div class="row gutter-y-30">
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="200ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Case Management</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-file-medical"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/case.jpg" alt="Case Management">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                 <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="400ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">PV Consultancy</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-comments"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/pv-consultancy.jpg" alt="PV Consultancy">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="600ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Medical Services</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-user-md"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://images.hindustantimes.com/img/2024/08/14/550x309/In-a-show-of-solidarity-and-demand-for-justice--th_1723655748492.jpg" alt="Medical Services">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="200ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Periodic Safety Reports</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-clipboard-check"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/periodic-safety-report.jpg" alt="Periodic Safety Reports">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
                  <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="400ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">Market Intelligence</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-chart-line"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/market-intelligence.jpg" alt="Market Intelligence">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
               
                <div class="col-md-6 col-lg-4">
                    <div class="service-card wow fadeInUp" data-wow-duration="1000ms" data-wow-delay="600ms">
                        <div class="service-card__inner">
                            <div class="service-card__top">
                                <h3 class="service-card__title"><a href="#">PV System Management</a></h3>
                                <div class="service-card__icon">
                                    <i class="fas fa-cogs"></i>
                                </div>
                            </div>
                            <div class="service-card__thumb">
                                <div class="service-card__thumb__item">
                                    <img src="https://www.weblinkservices.net/demo/sojar-research/images/services/pv-sysytem-management.jpg" alt="PV System Management">
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </section><!-- Contact Section -->
    <!-- Include Google Fonts (Optional) -->
<link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;600&display=swap" rel="stylesheet">

<style>
.why-section {
    font-family: 'Inter', sans-serif;
    background: linear-gradient(to right, #f9f9f9, #ffffff);
    padding: 60px 20px;
    text-align: center;
    border-radius: 20px;
    box-shadow: 0 8px 24px rgba(0, 0, 0, 0.05);
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
    background: #f0f6ff;
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
    background-color: #f17a35;
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
</style>

<div class="why-section">
    <h2>Why Sojar?</h2>
    <p class="description">
        Sojar stands out as a trusted partner in Pharmacovigilance by offering 
        comprehensive, end-to-end safety solutions tailored to the needs of
         pharmaceutical and biopharmaceutical companies.</p>

  

<style>
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
    background: #f0f6ff;
    padding: 24px 20px;
    border-radius: 16px;
    width: 200px;
    text-align: center;
    box-shadow: 0 6px 18px rgba(0, 0, 0, 0.08);
    transition: transform 0.2s ease;
}

.stat-box:hover {
    transform: translateY(-6px);
}

.stat-number {
    font-size: 28px;
    font-weight: 600;
    color: #f5733b;
    margin-bottom: 10px;
}

.stat-label {
    font-size: 14px;
    color: #444;
    line-height: 1.4;
}
</style>
<script>
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
</script>


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
    <a href="#" class="find-out-btn">Find out more</a>
</div>
<!-- // end  -->


    <section id="contact" class="contact-info-section">
        <div class="auto-container">
            <!-- Sec Title -->
          


    </section><!-- Footer start-->

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
                        <a class="navbar-brand" href="#">
                            <img src="assets/images/logo.png" alt="Sojar Research" style="width: 140px; height: auto;">
                        </a>
                        <div class="copyright" style="font-size: 12px; margin-top: 10px;">
                            © 2022 Sojar Research Services Pvt. Ltd.<br>All Rights Reserved
                        </div>
                        <!-- i want this span to bottom of the page -->
                        <div class="social-neumorphic mt-2">
                            <a href="https://instagram.com" target="_blank" class="neu-button"><i class="fab fa-instagram"></i></a>
                            <a href="mailto:info@sojarresearch.com" class="neu-button"><i class="fas fa-envelope"></i></a>
                            <a href="https://linkedin.com" target="_blank" class="neu-button"><i class="fab fa-linkedin-in"></i></a>
                            <a href="https://facebook.com" target="_blank" class="neu-button"><i class="fab fa-facebook-f"></i></a>
                        </div>
                    </div>
                </div>

                <!-- Quick Links -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget links-widget">
                        <h5>Quick Links</h5>
                        <ul class="list-link list-double-arrow">
                            <li><a href="index.html">Home</a></li>
                            <li><a href="about.html">Company Overview</a></li>
                            <li><a href="product-list.html">Pharmacovigilance</a></li>
                            <li><a href="services.html">Our Services</a></li>
                            <li><a href="enquiry.html">Enquiry Now</a></li>
                            <li><a href="contact.html">Contact Us</a></li>
                        </ul>
                    </div>
                </div>

                <!-- Our Services -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget links-widget">
                        <h5>Our Services</h5>
                        <ul class="list-link list-double-arrow">
                            <li><a href="pv-consultancy.html">PV Consultancy</a></li>
                            <li><a href="medical-services.html">Medical Services</a></li>
                            <li><a href="periodic-safety-reports.html">Periodic Safety Reports</a></li>
                            <li><a href="case-management.html">Case Management</a></li>
                            <li><a href="market-intelligence.html">Market Intelligence</a></li>
                            <li><a href="pv-system-management.html">PV System Management</a></li>
                        </ul>
                    </div>
                </div>

                <!-- Address -->
                <div class="footer-column col-lg-2 col-md-6 col-sm-12">
                    <div class="footer-widget contact-widget">                        
                                    <h5>Contact Us</h5>
                                    <ul>
                                        <li><span class="icon fa fa-map-marker"></span><strong>Address</strong> Office 201, Creative’s Orchid, <br>Hinjawadi-Punawale Link Road,<br> Beside Lotus Business School.<br> Pune- 411033 Maharashtra (India).</li>
                                        <li><span class="icon fa fa-phone"></span><strong>Phone</strong> <a href="tel:+91 8793 939 229">+91 8793 939 229</a></li>
                                    </ul>
                                </div>
                            </div>
                   
                <!-- Map: Moved Slightly Left -->
                <div class="footer-column col-lg-3 col-md-6 col-sm-12" style="margin-left: -20px;">
                    <div class="footer-widget footer-widget--time">
                        <h5 class="footer-widget__title">Location Map</h5>
                        <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3780.676559266706!2d73.73748347489511!3d18.63361216571207!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bc2b945a1da9fd9%3A0xd217090176788f8!2sSojar%20Research%20Services%20Private%20Limited!5e0!3m2!1sen!2sin!4v1747224613164!5m2!1sen!2sin"
                            width="105%" height="200" style="border:0;" allowfullscreen="" loading="lazy"
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
</body>
</html>























