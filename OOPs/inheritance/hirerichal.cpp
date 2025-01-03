// C++ program to implement
// Hierarchical Inheritance
#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub class
class Car : public Vehicle
{
	public:
	Car()
	{
		cout << "Car constructor" << endl;
	}
};

// second sub class
class Bus : public Vehicle
{
	public:
	Bus()
	{
		cout << "Bus constructor" << endl;
	}
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Car obj1;
	Bus obj2;
	return 0;
}