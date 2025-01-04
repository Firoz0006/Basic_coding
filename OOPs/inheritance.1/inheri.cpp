#include<bits/stdc++.h>
//simple inheritance example
using namespace std;
class person
{
	public:
	string name;
	int age;


	// person(string name,int age){
	// this->name = name;
		// this->age = age;
		//}
		person(){
			
		}

};

class student : public person{
public:
	
	int rollno;

	void getInfo(){
		cout<<"Enter name and age"<<endl;
		cin>>name>>age;
		cout<<"Enter roll number"<<endl;
		cin>>rollno;
	}
};

int main() {

	student s1;
	s1.name = "Md Firoz Alam";
	s1.age = 20;
	s1.rollno = 89;
	s1.getInfo();
}