#include<iostream>

using namespace std;

class A {
    public:
        A() {
            cout << "Constructor A" << endl;
        }
        virtual void display() {
            cout << "Class A" << endl;
        }

        ~A() {
            cout << "Destructor A" << endl;
        }
};

class B : public A {
    public:
        B() {
            cout << "Constructor B" << endl;
        }

        void display() override {
            cout << "Class B" << endl;
        }

        ~B() {
            cout << "Destructor B" << endl;
        }
};

class C : public B {
    public:
        C() {
            cout << "Constructor C" << endl;
        }

        void display() {
            cout << "Class C" << endl;
        }

        ~C() {
            cout << "Destructor C" << endl;
        }
};

int main() {
    A* a = new B();

    a->display();

    return 0;
}