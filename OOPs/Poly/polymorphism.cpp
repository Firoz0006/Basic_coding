// Polymorphism in C++
//Polymorphism:- means "many forms", and it occurs when we have many classes 
//that are related to each other by inheritance.
#include <bits/stdc++.h>
using namespace std;
//base class
class Animal{
	public:
		void animalsound(){
			cout<<"the Animal makes a sound"<<endl;
		}
};
//Derived class
class Pig:public Animal{
	public:
		void animalsound(){
			cout<<"the pig says:wee wee"<<endl;
	}
};
//Derived class
class Dog:public Animal{
	public:
		void animalsound(){
			cout<<"the dog says:woof woof"<<endl;
	}
};
int main(){
	Animal myanimal;
	Pig mypig;
	Dog mydog;
	myanimal.animalsound();
	mypig.animalsound();
	mydog.animalsound();
	return 0;
}
