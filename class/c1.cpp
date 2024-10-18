#include<bits/stdc++.h>
using namespace std;



//     class Teacher{ //by default private 
//         private: 
//         //properties 
//         string name;
//         string subject;
//         string dept;
//         double salary;

//         //Methods
//         void changeDept(string newDept){
//             dept = newDept;
//         }
//     };

//     int main(){
//         Teacher t1;
//         Teacher t2;
//         Teacher t3;
//         Teacher t4;
//         t1.dept = "CSE";
//         t1.name = "Firoz";
//         t1.subject = "math";
//         t1.salary = "300000";

//         cout<<t1.salary<<endl;
//         return 0;

// }


    class Teacher{
        private:
                double salary;

        public:
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
    };

    class student{
        string name;
        string dept;
        string subject;
        int roll;
        int age;
    };

    int main(){
        Teacher t1;
        Teacher t2;
        Teacher t3;
        Teacher t4;
        t1.dept = "CSE";
        t1.name = "Firoz";
        t1.subject = "math";
        t1.setSalary(300000);

        cout<<t1.name<<endl;
        cout<<t1.getSalary()<<endl;
        return 0;

}