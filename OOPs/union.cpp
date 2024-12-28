#include<bits/stdc++.h>
using namespace std;
//union is a user-defined data type that allows storing different data types in the same memory location.
//union used for the better memory management.
//union is similar to structure but the difference is that in structure each member has its own memory location
//while in union all members share the same memory location.

typedef struct employee {// in structure each member has its own memory location
    int id;//4 bytes
    string name;//24 bytes
    char favchar;//1 byte
    double salary;//8 bytes
    //total 37 bytes chli jaye gi
} ep;

union money {//but union all members share the same memory location.,means it will take the memory 
//of the largest data type.
    int rice;//4 bytes
    char car;//1 byte
    float pounds;//4 bytes
    double dollar;//8 bytes
    //total 8 bytes chli jaye gi,consider maximum size of data type,at a time only one member can be used.
};
int main(){
    // ep r;
    // r.id = 1;
    // r.name = "John";
    // r.favchar = 'c';
    // r.salary = 1000.0;
    // cout << "ID: " << r.id << endl;
    // cout << "Name: " << r.name << endl;
    // cout << "Favourite Character: " << r.favchar << endl;
    // cout << "Salary: " << r.salary << endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << "Rice: " << m1.rice << endl;//it will print the garbage value because at a time only one member can be used.
    cout << "Car: " << m1.car << endl;
    return 0;
}



