#include<bits/stdc++.h>
using namespace std;

 class Teacher{
        private:
                double salary;

        public:

        Teacher(){//non parameterized constructor
            //as conctructor call,no return type,no parameter,always public bnana hai
            //cout<<"i am a constructor"<<endl;
            dept = "CSE";//initialized consructor
        }

        Teacher(string n,string d,string s,double sal){//parameterized constructor
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }
        //properties
        string name;
        string subject;
        string dept;


        //Methods
        void changeDept(string newDept){
            dept = newDept;
        }
        // setters private values ko set krna
        void setSalary(double newSalary){
            salary = newSalary;
        }
        // getter private values ko get krne ke liye
        double getSalary(){
            return salary;
        }

        void getInfo(){
            cout<<name<<endl;
            cout<<subject<<endl;
            cout<<dept<<endl;
            cout<<salary<<endl;
        }
    };

    int main(){
        Teacher t1("Firoz","CSE","math",300000);

        t1.getInfo();
        
        // Teacher t1;//constructor call krega directly/automatically when i create object
        // Teacher t2;
        // //t1.dept = "CSE";
        // t1.name = "Firoz";
        // t1.subject = "math";
        // t1.setSalary(300000);

        // cout<<t1.getSalary()<<endl;
        // cout<<t1.name<<endl;
        // cout<<t1.dept<<endl;
        return 0;
    }
