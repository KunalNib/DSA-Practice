document.addEventListener('DOMContentLoaded', () => {
    const adminLoginLink = document.getElementById('adminLoginLink');
    const adminLoginModal = document.getElementById('adminLogin');
    const adminDashboardModal = document.getElementById('adminDashboard');
    const closeButtons = document.querySelectorAll('.close');

    // Show admin login modal
    adminLoginLink.addEventListener('click', () => {
        adminLoginModal.style.display = 'block';
    });

    // Hide modals when close button is clicked
    closeButtons.forEach(button => {
        button.addEventListener('click', () => {
            button.closest('.modal').style.display = 'none';
        });
    });

    // Hide modal if clicked outside of the modal content
    window.addEventListener('click', (event) => {
        if (event.target.classList.contains('modal')) {
            event.target.style.display = 'none';
        }
    });

    // Handle table booking form submission
    document.getElementById('tableBookingForm').addEventListener('submit', function(e) {
        e.preventDefault();

        const restaurant = document.getElementById('restaurant').value;
        const tableNumber = document.getElementById('tableNumber').value;
        const name = document.getElementById('name').value;
        const email = document.getElementById('email').value;
        const phone = document.getElementById('phone').value;
        const date = document.getElementById('date').value;
        const startTime = document.getElementById('startTime').value;
        const endTime = document.getElementById('endTime').value;
        const food = document.getElementById('food').value;

        const bookingData = {
            restaurant,
            tableNumber,
            name,
            email,
            phone,
            date,
            startTime,
            endTime,
            food
        };

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
                alert('Table booked successfully!');
            } else {
                alert('Table is already booked at this time!');
            }
        })
        .catch(error => {
            console.error('Error:', error);
        });
    });

    // Load admin dashboard data
    function loadAdminDashboard() {
        fetch('/bookedTables')
        .then(response => response.json())
        .then(data => {
            const adminTables = document.getElementById('adminTables');
            adminTables.innerHTML = '';

            data.forEach(table => {
                const tableDiv = document.createElement('div');
                tableDiv.classList.add('table');
                tableDiv.innerHTML = `
                    <h3>Restaurant: ${table.restaurant}</h3>
                    <p>Table Number: ${table.tableNumber}</p>
                    <p>Name: ${table.name}</p>
                    <p>Email: ${table.email}</p>
                    <p>Phone: ${table.phone}</p>
                    <p>Date: ${table.date}</p>
                    <p>Start Time: ${table.startTime}</p>
                    <p>End Time: ${table.endTime}</p>
                    <p>Food Order: ${table.food}</p>
                    <button class="deleteButton" data-id="${table._id}">Delete</button>
                `;
                adminTables.appendChild(tableDiv);
            });

            // Add event listeners to delete buttons
            document.querySelectorAll('.deleteButton').forEach(button => {
                button.addEventListener('click', () => {
                    const bookingId = button.getAttribute('data-id');
                    fetch(`/deleteBooking/${bookingId}`, {
                        method: 'DELETE'
                    })
                    .then(response => response.json())
                    .then(data => {
                        if (data.success) {
                            loadAdminDashboard();  // Reload dashboard to reflect changes
                        } else {
                            alert('Failed to delete booking!');
                        }
                    })
                    .catch(error => {
                        console.error('Error:', error);
                    });
                });
            });
        })
        .catch(error => {
            console.error('Error:', error);
        });
    }

    // Handle restaurant food items
    const restaurantFoodItems = {
        "Chinese Restaurant": ["Dumplings", "Sweet and Sour Pork", "Kung Pao Chicken"],
        "Pizza Place": ["Margherita Pizza", "Pepperoni Pizza", "BBQ Chicken Pizza"],
        "Burger Place": ["Cheeseburger", "Veggie Burger", "Bacon Burger"]
    };

    document.getElementById('restaurant').addEventListener('change', function() {
        const selectedRestaurant = this.value;
        const foodSelect = document.getElementById('food');
        foodSelect.innerHTML = '';

        restaurantFoodItems[selectedRestaurant].forEach(food => {
            const option = document.createElement('option');
            option.value = food;
            option.textContent = food;
            foodSelect.appendChild(option);
        });
    });

    // Initialize food options on page load
    document.getElementById('restaurant').dispatchEvent(new Event('change'));

    // Handle admin login form submission
    document.getElementById('adminLoginForm').addEventListener('submit', function(e) {
        e.preventDefault();

        const username = document.getElementById('adminUsername').value;
        const password = document.getElementById('adminPassword').value;

        const adminData = {
            username,
            password
        };

        fetch('/adminLogin', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(adminData)
        })
        .then(response => response.json())
        .then(data => {
            if (data.success) {
                loadAdminDashboard();
                adminLoginModal.style.display = 'none';
                adminDashboardModal.style.display = 'block';
            } else {
                alert('Invalid login credentials!');
            }
        })
        .catch(error => {
            console.error('Error:', error);
        });
    });
});
document.getElementById('tableBookingForm').addEventListener('submit', function(e) {
    e.preventDefault();

    const bookingData = {
        restaurant: document.getElementById('restaurant').value,
        tableNumber: document.getElementById('tableNumber').value,
        name: document.getElementById('name').value,
        email: document.getElementById('email').value,
        phone: document.getElementById('phone').value,
        date: document.getElementById('date').value,
        startTime: document.getElementById('startTime').value,
        endTime: document.getElementById('endTime').value,
        food: document.getElementById('food').value
    };

    // Store booking data temporarily in localStorage
    localStorage.setItem('bookingData', JSON.stringify(bookingData));

    // Redirect to the payment page
    window.location.href = '/payment.html';
});

