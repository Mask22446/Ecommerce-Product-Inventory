#pragma once
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
	string name;
	string description;
	float weight;
	float price;
public:
	void prompt();
	string getName() const { return name; }
	string getDescription() const { return description; }
	float getPrice() const { return price; }
	float getWeight() const { return weight; }
	float getShippingCost();
	float getSalesTax();
	float getTotalPrice();

	void setName(string name) { this->name = name; }
	void setDescription(string description) { this->description = description; }
	void setPrice(float price) { this->price = price; }
	void setWeight(float weight) { this->weight = weight; }
	void displayAdvertising();
	void displayInventory();
	void displayReceipt();
	Product() {
		name = "none";
		description = "";
		price = 0.0;
		weight = 0.0;
	}
	Product(string name, string description, float price, float weight) {
		setName(name);
		setDescription(description);
		setPrice(price);
		setWeight(weight);
	}
};

#endif 