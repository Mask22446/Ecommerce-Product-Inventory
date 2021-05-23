#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include "address.h"

using namespace std;

class Customer
{
private:
	string  name;
	Address address;

public:
    string getName()       const { return name; }
    Address getAddress()   const { return address; }

    void setName(string name) { this->name = name; }
    void setAddress(Address address) { this->address = address; }

    void display();

    Customer() {
        name = "unspecified";
    }
    Customer(string name, Address address) {
        setName(name);
        setAddress(address);
    }
};

#endif