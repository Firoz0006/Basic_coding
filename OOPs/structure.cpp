#include<bits/stdc++.h>
using namespace std;

struct employee {
    int id;
    string name;
    double salary;
};

int main() {
    employee r;
    r.id = 1;
    r.name = "John";
    r.salary = 1000.0;
    cout << "ID: " << r.id << endl;
    cout << "Name: " << r.name << endl;
    cout << "Salary: " << r.salary << endl;
    return 0;
}