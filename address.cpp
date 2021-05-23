#include "address.h"
#include <iostream>
#include <string>

using namespace std;

void Address::display() {
	cout << street << "\n";
	cout << city << ", " << state << " " << zip << endl;
}