#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int rollno = 10;
    public:
    void display(){
        cout<<"the rollno is:"<<rollno;
    }
} *root;
int main(){
    student s;
    s.display();
}
