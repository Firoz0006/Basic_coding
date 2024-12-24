
//simple inheritance example
//Defination:-A class can inherit the properties of another class.
//In C++, it is possible to inherit attributes and methods from one class to another. 
//We group the "inheritance concept" into two categories:
//Derived(Child) Class - the class that inherits from another class
//Base (Parent) Class - the class being inherited from
#include<bits/stdc++.h>
using namespace std;

//Base class(parent class)
class vehicle{
	public:
	string brand = "Ford";
	void honk(){
		cout<<"Tuut, tuut!"<<endl;
	}
};

//Derived class(child class)
class car: public vehicle{
	public:
	string model = "Mustang";
};

int main(){
	car mycar;
	mycar.honk();
	cout<<mycar.brand<<" "<<mycar.model<<endl;
	return 0;
}