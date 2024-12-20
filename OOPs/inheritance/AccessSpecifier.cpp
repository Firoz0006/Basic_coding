//Access Specifier in Inheritance
//Public:-members of a class are accessible from outside the class, even when inherited.
//Private:- members can only be accessed within the class , they are not allowed to be accessed 
//from any part of code outside the class, if we will  try to access the private members directly from 
//outside the class then compiler will throw an error.we can  acess with the help of 
//1)(use public method inside the same class)
//2)get and set method 
//3) use friend class
//4) getter and setter method  to access the private members.
#include<bits/stdc++.h>
using namespace std;
//base class
class employee{
    protected://proctcted access specifier
        int salary;//by default private
};
//derived class
class programmer:public employee{
    public:
        int bonus;
        void setSalary(int s){
            salary=s;
        }
        int getSalary(){
            return salary;
        }
};
int main(){
    programmer obj;
    obj.setSalary(50000);
    obj.bonus=15000;
    cout<<"Salary is:"<<obj.getSalary()<<endl;
    cout<<"Bonus is:"<<obj.bonus<<endl;
    return 0;
}