#include "customer.h"
#include "address.h"
#include <string>
#include <iostream>

using namespace std;


void Customer::display() {
	cout << name << endl;
	address.display();
}