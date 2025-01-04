#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    string course;
    public:
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"course:"<<course<<endl;
    }
};
int main(){
    student s1;
    s1.name = "Firoz";
    s1.age = 21;
    s1.course = "B.Tech";
    s1.display();
    return 0;
}