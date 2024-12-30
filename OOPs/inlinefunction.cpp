#include<bits/stdc++.h>
using namespace std;
//inline function is a function that is expanded in line when it is called.
//When the inline function is called whole code of the inline function gets inserted or expanded 
//at the point of inline function call.
//This expansion is performed by the C++ compiler at compile time.
//Advantages:it reduces the function call overhead, it reduces the time taken to transfer 
//control from the caller to the callee,and improves the performance of the program.
//Disadvantages:it increases the code size, it increases the compilation time,
// It increases the potential for code redundancy, it increases the chances of cache misses,
//When to use inline function:it is used when the function is small,
// it is used when the function is called frequently.
//it is not used when the function is large,if recursive function is there,if the function has a loop,
//static variables,if the function return type is other than void,function has a switch statement,goto statment.

inline int add(int a, int b) {
    return a + b;
}
int main() {
    int a = 10, b = 20;
    int sum = add(a, b);
    cout << "Sum: " << sum << endl;
    return 0;
}