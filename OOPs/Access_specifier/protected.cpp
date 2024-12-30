#include<bits/stdc++.h?
using namespace std;


class student {
    protected:
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
    s1.course = "Btech";
    s1.display();
    return 0;
}

//by default class ke members private hote hai
//protected ke members class ke bahar access ho skte hai

class myclass{
    int x;//private sttribute
    int y;//private sttribute
};