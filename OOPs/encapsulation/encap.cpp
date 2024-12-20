//Encapsulation 
//defination:- The meaning of Encapsulation, is to make sure that "sensitive" data is hidden
// from users. To achieve this, you must declare class variables/attributes as private.
// In this example, the age variable is assigned to be private, which means that it can only be accessed
#include <iostream>
using namespace std;

class Encapsulation{
	private:
		//data hidden from outside world
		int salary;

	public:
	void setsalary(int s){ //setter function
		salary=s;
	}

	int getsalary(){ //getter function
		return salary;
	}

};
int main(){
	Encapsulation obj;
	obj.setsalary(60000);
	cout<<obj.getsalary();
	return 0;
}