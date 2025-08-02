const express = require('express');
const bodyParser = require('body-parser');
const path = require('path');
const { MongoClient, ObjectId } = require('mongodb');

const app = express();
const port = 3000;
const mongoUri = 'mongodb://localhost:27017';  // Replace with your MongoDB URI
const dbName = 'restaurantBooking';

app.use(bodyParser.json());

// Serve static files from the 'public' directory
app.use(express.static(path.join(__dirname, 'public')));

let db;

// Connect to MongoDB
MongoClient.connect(mongoUri, { useNewUrlParser: true, useUnifiedTopology: true })
    .then(client => {
        db = client.db(dbName);
        console.log('Connected to MongoDB');
    })
    .catch(error => console.error(error));

// Endpoint to book a table
app.post('/bookTable', (req, res) => {
    const bookingData = req.body;

    db.collection('bookings').findOne({
        restaurant: bookingData.restaurant,
        tableNumber: bookingData.tableNumber,
        date: bookingData.date,
        startTime: { $lt: bookingData.endTime },
        endTime: { $gt: bookingData.startTime }
    })
    .then(existingBooking => {
        if (existingBooking) {
            res.json({ success: false });
        } else {
            db.collection('bookings').insertOne(bookingData)
                .then(() => res.json({ success: true }))
                .catch(error => res.status(500).json({ success: false, error }));
        }
    })
    .catch(error => res.status(500).json({ success: false, error }));
});

// Endpoint to get all bookings
app.get('/bookedTables', (req, res) => {
    db.collection('bookings').find().toArray()
        .then(bookings => res.json(bookings))
        .catch(error => res.status(500).json({ error }));
});
// Add this in your server code

app.get('/payment.html', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'payment.html'));
});


// Endpoint to delete a booking
app.delete('/deleteBooking/:id', (req, res) => {
    const id = req.params.id;

    try {
        const objectId = new ObjectId(id); // Ensure this is a valid MongoDB ObjectId
        db.collection('bookings').deleteOne({ _id: objectId })
            .then(result => {
                if (result.deletedCount > 0) {
                    res.json({ success: true });
                } else {
                    res.json({ success: false });
                }
            })
            .catch(error => {
                console.error('Error deleting booking:', error);
                res.status(500).json({ success: false, error });
            });
    } catch (error) {
        console.error('Invalid ObjectId format:', error);
        res.status(400).json({ success: false, error: 'Invalid ObjectId format' });
    }
});



// Endpoint for admin login (example implementation)
app.post('/adminLogin', (req, res) => {
    const { username, password } = req.body;

    // Dummy admin check
    if (username === 'admin' && password === 'password') {
        res.json({ success: true });
    } else {
        res.json({ success: false });
    }
});

app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}`);
});
