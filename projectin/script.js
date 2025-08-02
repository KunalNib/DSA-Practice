document.addEventListener('DOMContentLoaded', () => {
  const hamburger = document.querySelector('.hamburger');
  const navLinks = document.querySelector('.nav-links');

  hamburger.addEventListener('click', () => {
      navLinks.classList.toggle('open');
  });

  // Order Tracking
  const trackForm = document.getElementById('track-form');
  trackForm.addEventListener('submit', async (event) => {
      event.preventDefault();
      const orderId = document.getElementById('track-order-id').value;
      const response = await fetch(`/api/orders/track/${orderId}`);
      const data = await response.json();

      const orderStatus = document.getElementById('order-status');
      if (response.ok) {
          orderStatus.innerHTML = `<p>Order ID: ${data.orderId}</p>
                                   <p>Status: ${data.status}</p>
                                   <p>Customer Name: ${data.customerName}</p>
                                   <p>Items: ${data.items.join(', ')}</p>
                                   <p>Created At: ${new Date(data.createdAt).toLocaleString()}</p>`;
      } else {
          orderStatus.innerHTML = `<p>${data.message}</p>`;
      }
  });

  // Order Cancellation
  const cancelForm = document.getElementById('cancel-form');
  cancelForm.addEventListener('submit', async (event) => {
      event.preventDefault();
      const orderId = document.getElementById('cancel-order-id').value;
      const response = await fetch('/api/orders/cancel', {
          method: 'POST',
          headers: {
              'Content-Type': 'application/json'
          },
          body: JSON.stringify({ orderId })
      });
      const data = await response.json();

      const cancellationStatus = document.getElementById('cancellation-status');
      cancellationStatus.innerHTML = `<p>${data.message}</p>`;
  });
});

