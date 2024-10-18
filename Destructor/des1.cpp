#include<bits/stdc++.h>
using namespace std;

class student {
    public:
    string name;
    double* cgpaptr;

    student(string name,double cgpa){// constructor automatically call
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    student(student &obj){
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }

    // destructor khud call krte hai
    ~student(){
        cout<<"hi i am destructor delete everything\n";

    }

    /**
     * @brief prints the information of the student
     * @details prints the name and the CGPA of the student
     * 
     */
    void getInfo(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"CGPA: "<<*cgpaptr<<endl;
    }
};

int main(){
    student s1("Md Firoz Alam",8.9);
    s1.getInfo();

}