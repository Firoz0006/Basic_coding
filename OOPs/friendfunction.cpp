
//friend function is non -member function that has access to the private and protected members of the class.
//A friend function is declared by the class that is granting access.
//A friend function can access private, protected, and public members of the class.
//A friend function is not a member of the class.
//A friend function is defined outside the class.
//A friend function can be declared in the private or public section of the class.
//A friend function cannot access the members directly using the member access operator.
//A friend function can be a member of another class.
//A friend function can be a global function.
// this can be useful when you need to access the private data of multiple classes in a single function.
//friend class is a class that can access the private and protected members of another class.
#include<bits/stdc++.h>
using namespace std;

class gfg {
    private:
        int num;
    protected:
        int x;
    public:

        gfg(){
            num = 8;
            x = 9;
        }
        friend  class F;
};
class F {
    public:
        void showdata(gfg& a){
            cout << "Private member: " << a.num << endl;
            cout << "Protected member: " << a.x << endl;
        }
};
int main(){
    gfg a;
    F f;
    f.showdata(a);
    return 0;
}
//output:8,9
