#include<bits/stdc++.h>
using namespace std;
class Bank{
    private:
    char name[40],actype[40];
    int bal,acno;
    public:
    Bank(){
        cout<<"enter the account name:";
        cin.getline(name,40);
        cout<<"enter account type:";
        cin.getline(actype,40);
        cout<<"enter account no:";
        cin>>acno;
        cout<<"enter opening balance:";
        cin>>bal;
    }
};
main(){
    Bank objBank;
}