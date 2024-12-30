#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
        int balance;
    public:
        void setBalance(int b){
            balance = b;
        }
        int getBalance(){
            return balance;
        }
};

int main(){
    Account a;
    a.setBalance(1000);
    cout<<a.getBalance();
    return 0;
}