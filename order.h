#pragma once
#ifndef ORDER_H
#define ORDER_H
#include "customer.h"
#include "product.h"
#include <iostream>

using namespace std;


class Order
{
private:
	Customer customer;
	Product product;
	int quantitiy;
public:
	Order() {
		quantitiy = 0;
	}
	Order(Product product, int quantitiy, Customer customer) {
		setProduct(product);
		setQuantitiy(quantitiy);
		setCustomer(customer);
	}
	Product getProduct() const { return product; }
	int getQuantitiy() const { return quantitiy; }
	Customer getCustomer() const { return customer; }

	void setProduct(Product product) { this->product = product; }
	void setQuantitiy(int quantitiy) { this->quantitiy = quantitiy; }
	void setCustomer(Customer customer) { this->customer = customer; }

	string getShippingZip() const;
	float getTotalPrice() const;
	void displayShippingLabel() const;
	void displayInformation() const;
};

#endif