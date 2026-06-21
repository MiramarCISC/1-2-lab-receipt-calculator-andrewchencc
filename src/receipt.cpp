#include "receipt.hpp"

// Return the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
    return item1 + item2 + item3;
}

// Return the sales tax using TAX_RATE.
double calculateTax(double subtotal) {
    return subtotal * TAX_RATE;
}

// Return the tip amount (tipPercent is given as a percentage).
double calculateTip(double subtotal, double tipPercent) {
    return subtotal * (tipPercent / 100.0);
}

// Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
    return subtotal + tax + tip;
}
