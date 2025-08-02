// payment.js

document.getElementById('paymentDoneButton').addEventListener('click', function() {
    const bookingData = JSON.parse(localStorage.getItem('bookingData'));

    fetch('/bookTable', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(bookingData)
    })
    .then(response => response.json())
    .then(data => {
        if (data.success) {
            alert('Payment successful! Table booked.');
            localStorage.removeItem('bookingData');
            window.location.href = '/';  // Redirect to homepage or any other page
        } else {
            alert('Table is already booked at this time!');
        }
    })
    .catch(error => {
        console.error('Error:', error);
    });
});
