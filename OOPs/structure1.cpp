#include<bits/stdc++.h>
using namespace std;

typedef struct employee {//structure is a user-defined data type in C/C++.
//It is used to store a collection of data of different data types.
//Typedef:- The typedef keyword is used to give a new name to a type.
    int id;
    string name;
    double salary;
} ep;


int main() {
    ep r;
    r.id = 1;
    r.name = "John";
    r.salary = 1000.0;
    cout << "ID: " << r.id << endl;
    cout << "Name: " << r.name << endl;
    cout << "Salary: " << r.salary << endl;
    return 0;
}
