#include<bits/stdc++.h>
using namespace std;

class book {
    public:
    string title;
    string author;
    int pages;

    public:
    void add(int a,int b){
        cout<<(a+b)<<endl;
    }
    void add(double a,double b){
        cout<<(a+b)<<endl;
    }
    
};
    
int main(){
    
    book b;
    add(2,3);
    add(2.5,3.5);
    return 0;
}