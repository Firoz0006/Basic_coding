//Multiple  inheritance example
//Defination:-A class can also be derived from more than one base class, 
//using a comma-separated list:
#include<bits/stdc++.h>
using namespace std;

//Base class 
class myclass {
    public:
        void myfunc() {
            cout<<"some content in parent class"<<endl;
        }
};

//another base class
class myotherclass {
    public:
        void myotherfunc() {
            cout<<"some content in another parent class"<<endl;
        }
};

//derived class
class mychildclass: public myclass, public myotherclass {
    public:
        void mychildfunc() {
            cout<<"some content in child class"<<endl;
        }
};
int main() {
    mychildclass obj;
    obj.myfunc();
    obj.myotherfunc();
    obj.mychildfunc();
    return 0;
}