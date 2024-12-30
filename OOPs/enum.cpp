#include<bits/stdc++.h>
using namespace std;
//It is used to assign names to the integral constants which makes a program easy to read and maintain.
//The keyword “enum” is used to declare an enumeration.
//It is a user-defined data type, which is used to assign names to integral constants.
//The enumeration is used to define the constants with the help of keywords “enum”, “{ }”.
//The enumeration is declared in the global scope or namespace scope.

enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
//by default monday=0,tuesday=1,wednesday=2,thursday=3,friday=4,saturday=5,sunday=6
int main(){
    day d;
    d = wednesday;
    cout << "Day: " << d+1 << endl;
    cout << "Day: " << d << endl;
    cout << "Day: " << monday << endl;
    return 0;
}
