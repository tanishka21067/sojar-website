// PSMF Service Page JS - Sojar Research
// --------------------------------------
document.addEventListener('DOMContentLoaded', function() {
  // Fade-in effect for PSMF service cards
  const serviceCards = document.querySelectorAll('.service-card');
  const fadeInOnScroll = () => {
    serviceCards.forEach(card => {
      const rect = card.getBoundingClientRect();
      if (rect.top < window.innerHeight - 60) {
        card.classList.add('visible');
      }
    });
  };
  fadeInOnScroll();
  window.addEventListener('scroll', fadeInOnScroll);

  // Optional: Touch-friendly hover effect for mobile
  serviceCards.forEach(card => {
    card.addEventListener('touchstart', () => {
      card.classList.add('hover');
    });
    card.addEventListener('touchend', () => {
      card.classList.remove('hover');
    });
  });
});
// End PSMF Service Page JS

// Aggregate Reporting 
// ----------------------------------------------------------
document.addEventListener('DOMContentLoaded', function() {
  // Fade-in effect for Aggregate Reporting service cards
  const serviceCards = document.querySelectorAll('.service-card');
  const fadeInOnScroll = () => {
    serviceCards.forEach(card => {
      const rect = card.getBoundingClientRect();
      if (rect.top < window.innerHeight - 60) {
        card.classList.add('visible');
      }
    });
  };
  fadeInOnScroll();
  window.addEventListener('scroll', fadeInOnScroll);

  // Optional: Touch-friendly hover effect for mobile
  serviceCards.forEach(card => {
    card.addEventListener('touchstart', () => {
      card.classList.add('hover');
    });
    card.addEventListener('touchend', () => {
      card.classList.remove('hover');
    });
  });
});
// End Aggregate Reporting Page JS

// PV Services for Distributors JS - Sojar Research
// -----------------------------------------------
document.addEventListener('DOMContentLoaded', function() {
  // Fade-in effect for PV Services for Distributors service cards
  const serviceCards = document.querySelectorAll('.service-card');
  const fadeInOnScroll = () => {
    serviceCards.forEach(card => {
      const rect = card.getBoundingClientRect();
      if (rect.top < window.innerHeight - 60) {
        card.classList.add('visible');
      }
    });
  };
  fadeInOnScroll();
  window.addEventListener('scroll', fadeInOnScroll);

  // Optional: Touch-friendly hover effect for mobile
  serviceCards.forEach(card => {
    card.addEventListener('touchstart', () => {
      card.classList.add('hover');
    });
    card.addEventListener('touchend', () => {
      card.classList.remove('hover');
    });
  });
});
// End PV Services for Distributors JS

// Dossier Preparation & Regulatory Affairs JS - Sojar Research
// ----------------------------------------------------------
document.addEventListener('DOMContentLoaded', function() {
  // Fade-in effect for Dossier service cards
  const serviceCards = document.querySelectorAll('.service-card');
  const fadeInOnScroll = () => {
    serviceCards.forEach(card => {
      const rect = card.getBoundingClientRect();
      if (rect.top < window.innerHeight - 60) {
        card.classList.add('visible');
      }
    });
  };
  fadeInOnScroll();
  window.addEventListener('scroll', fadeInOnScroll);

  // Optional: Touch-friendly hover effect for mobile
  serviceCards.forEach(card => {
    card.addEventListener('touchstart', () => {
      card.classList.add('hover');
    });
    card.addEventListener('touchend', () => {
      card.classList.remove('hover');
    });
  });
});
// End Dossier Preparation & Regulatory Affairs JS

// QPPV & Local Contact Person for PV JS - Sojar Research
// -----------------------------------------------------
document.addEventListener('DOMContentLoaded', function() {
  // Fade-in effect for QPPV & Local Contact service cards
  const serviceCards = document.querySelectorAll('.service-card');
  const fadeInOnScroll = () => {
    serviceCards.forEach(card => {
      const rect = card.getBoundingClientRect();
      if (rect.top < window.innerHeight - 60) {
        card.classList.add('visible');
      }
    });
  };
  fadeInOnScroll();
  window.addEventListener('scroll', fadeInOnScroll);

  // Optional: Touch-friendly hover effect for mobile
  serviceCards.forEach(card => {
    card.addEventListener('touchstart', () => {
      card.classList.add('hover');
    });
    card.addEventListener('touchend', () => {
      card.classList.remove('hover');
    });
  });
});
// End QPPV & Local Contact Person for PV JS
// Service: GVP Audits/Inspection Preparedness for Pharmacovigilance
document.addEventListener('DOMContentLoaded', function () {
  const cards = document.querySelectorAll('.service-card');
  const observer = new IntersectionObserver(
    entries => {
      entries.forEach(entry => {
        if (entry.isIntersecting) {
          entry.target.style.opacity = 1;
          entry.target.style.transform = 'translateY(0)';
        }
      });
    },
    { threshold: 0.2 }
  );
  cards.forEach(card => {
    card.style.opacity = 0;
    card.style.transform = 'translateY(40px)';
    observer.observe(card);
  });
});
//End of GVP Audits/Inspection Preparedness for Pharmacovigilance
// Service: Medical Information and Call Center
document.addEventListener('DOMContentLoaded', function () {
  const cards = document.querySelectorAll('.service-card');
  const observer = new IntersectionObserver(
    entries => {
      entries.forEach(entry => {
        if (entry.isIntersecting) {
          entry.target.style.opacity = 1;
          entry.target.style.transform = 'translateY(0)';
        }
      });
    },
    { threshold: 0.2 }
  );
  cards.forEach(card => {
    card.style.opacity = 0;
    card.style.transform = 'translateY(40px)';
    observer.observe(card);
  });
});
// End of Service: Medical Information and Call Center