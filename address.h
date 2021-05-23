#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>

using namespace std;

class Address
{
private:
	string street;
	string city;
	string state;
	string zip;

public:
	string getStreet() const { return street; }
	string getCity()   const { return city; }
	string getState()  const { return state; }
	string getZip()    const { return zip; }

	void setStreet(string street) { this->street = street; }
	void setCity(string city) { this->city = city; }
	void setState(string state) { this->state = state; }
	void setZip(string zip) { this->zip = zip; }
	void display();

	Address() {
		street = "unknown";
		zip = "00000";
		state = "";
		city = "";
	}

	Address(string _street, string _city, string _state, string _zip) {
		street = _street;
		city = _city;
		state = _state;
		zip = _zip;
	}
};

#endif