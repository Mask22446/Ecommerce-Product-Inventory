#include "product.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Product::prompt() {
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter description: ";
	getline(cin, description);
	cout << "Enter weight: ";
	cin >> weight;
	cin.ignore();
	bool isBadPrice;
	do {
		isBadPrice = false;
		cout << "Enter price: ";
		cin >> price;
		if (cin.fail() || price < 0) {
			isBadPrice = true;
			cin.clear();
			cin.ignore(256, '\n');
		}
	} while (isBadPrice);
}
float Product::getShippingCost() {
	float rate;
	if (weight < 5) {
		rate = 2.0;
	}
	else {
		int overFive;
		overFive = weight - 5;
		rate = 2.0 + 0.1 * overFive;
	}
	return rate;
}

float Product::getSalesTax() {
	float tax;
	tax = price * 0.06;
	return tax;
}

float Product::getTotalPrice() {
	float total;
	float tax = getSalesTax();
	float shipping = getShippingCost();
	total = price + tax + shipping;
	return total;
}
void Product::displayInventory() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "$" << price << " - " << name << " - ";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << weight << " lbs";
	cout << endl;
}

void Product::displayAdvertising() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "$" << price << " - " << name << " - ";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << weight << " lbs";
	cout << endl;
}

void Product::displayReceipt() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << name << endl;
	cout << "  Price:         $" << setw(8) << price << endl;
	cout << "  Sales tax:     $" << setw(8) << getSalesTax() << endl;
	cout << "  Shipping cost: $" << setw(8) << getShippingCost() << endl;
	cout << "  Total:         $" << setw(8) << getTotalPrice() << endl;
}