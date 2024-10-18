#include<bits/stdc++.h>
using namespace std;

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
//------Ecapsulation------
    class Account{
		private:
			string password;
			double balance;//data hiding
		
		public:
			string accountId:
			string  username;
		
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