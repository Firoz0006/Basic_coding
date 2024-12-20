
//Multi Level  inheritance example
//Defination:-A class can also be derived from one class, which is already derived from another class.
#include<bits/stdc++.h>
using namespace std;
//Base class(parent class)
class myclass{

	public:
        void myfunction(){
            cout<<"some content in base class"<<endl;
        }
};

//Derived class(child class)
class mychild: public myclass{
    public:
        void mychildfunction(){
            cout<<"some content in child class"<<endl;
        }
};

//Derived class(child class)
class mygrandchild: public mychild{
    public:
        void mygrandchildfunction(){
            cout<<"some content in grandchild class"<<endl;
        }
};

int main(){
    mygrandchild obj;
    obj.myfunction();
    obj.mychildfunction();
    obj.mygrandchildfunction();
    return 0;
}