#include "order.h"
#include "product.h"
#include "customer.h"
#include "address.h"

#include <iostream>
#include <string>
#include <sstream>

string Order::getShippingZip() const {
	Address tempAddress = customer.getAddress();
	return tempAddress.getZip();
}

float Order::getTotalPrice() const {
	return getProduct().getTotalPrice() * quantitiy;
}

void Order::displayShippingLabel() const {
	return getCustomer().display();
}

void Order::displayInformation() const {
	cout << getCustomer().getName();
	cout << endl;
	cout << getProduct().getName();
	cout << endl;
	cout << "Total Price: $" << getTotalPrice();
	cout << endl;
}