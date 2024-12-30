//This pointer: ii is  a pointer which points to the current object of the class.
// This pointer is used to access the member variables and member functions of the class.
// This pointer is used to differentiate between the class members and the parameters with the same name.
// This pointer is used to return the current object of the class from the member function.
// This pointer is used to access the address of the current object.
//

#include<bits/stdc++.h>
using namespace std;

class Teacher
{
    public:
    string name;
    string subject;
    string dept;
    double salary;

    Teacher(string n,string s,string d,double sal)
    {
        this->name = n;
        this->subject = s;
        this->dept = d;
        this->salary = sal;
    }

    // copy Constructor
    Teacher(Teacher &orgObj){
        cout<<"i am custom copy constructor:\n"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }


    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;
    }
};

int main()
{
    Teacher t1("Firoz","CSE","math",300000);

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.salary<<endl;

    Teacher t2(t1);// default copy constructor invoked/call
    t2.getInfo();

    return 0;
}