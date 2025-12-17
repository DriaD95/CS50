document.addEventListener("DOMContentLoaded", function () {

  // Active nav link
  document.querySelectorAll(".nav-link").forEach(link => {
    if (window.location.pathname.endsWith(link.getAttribute("href"))) {
      link.classList.add("active");
    }
  });

  // Contact form handling
  const form = document.querySelector("form");
  if (form) {
    form.addEventListener("submit", e => {
      e.preventDefault();
      alert("Thank you for submitting the form!");
    });
  }

  // Footer year
  const footer = document.querySelector("footer");
  if (footer) {
    footer.textContent = `© ${new Date().getFullYear()} My Website`;
  }

  // Dark mode toggle
  const toggleBtn = document.createElement("button");
  toggleBtn.textContent = "Toggle Dark Mode";
  toggleBtn.className = "btn btn-outline-secondary ms-2";

  const navContainer = document.querySelector(".navbar .container-fluid");
  if (navContainer) {
    navContainer.appendChild(toggleBtn);
  }

  if (localStorage.getItem("darkMode") === "enabled") {
    document.body.classList.add("dark-mode");
  }

  toggleBtn.addEventListener("click", () => {
    document.body.classList.toggle("dark-mode");
    localStorage.setItem(
      "darkMode",
      document.body.classList.contains("dark-mode") ? "enabled" : "disabled"
    );
  });
});

