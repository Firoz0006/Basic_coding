// C++ Program to Demonstrate the working of Abstraction
//Data abstraction is the process of hiding certain details and showing only essential
//information to the user. Abstraction can be achieved with either abstract classes or interfaces.
//Abstract class: is a restricted class that cannot be used to create objects
//Abstract method: can only be used in an abstract class, and it does not have a body. The body is provided by the derived 
//class (inherited from).
#include<bits/stdc++.h>
using namespace std;

class implementAbstraction {
private:
	int a, b;

public:
	// method to set values of
	// private members
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}
