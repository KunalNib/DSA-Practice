const express = require('express');
const router = express.Router();
const Order = require('../models/order');

// Order Tracking
router.get('/track/:orderId', async (req, res) => {
    try {
        const order = await Order.findOne({ orderId: req.params.orderId });
        if (order) {
            res.json(order);
        } else {
            res.status(404).json({ message: 'Order not found' });
        }
    } catch (error) {
        res.status(500).json({ message: error.message });
    }
});

// Order Cancellation
router.post('/cancel', async (req, res) => {
    try {
        const order = await Order.findOne({ orderId: req.body.orderId });
        if (order) {
            order.status = 'Cancelled';
            await order.save();
            res.json({ message: 'Order cancelled' });
        } else {
            res.status(404).json({ message: 'Order not found' });
        }
    } catch (error) {
        res.status(500).json({ message: error.message });
    }
});

module.exports = router;
