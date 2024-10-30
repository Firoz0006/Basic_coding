#include<bits/stdc++.h>
using namespace std;
//without using operator +,-


class solution{
public:
int getSum(int a,int b){
    while(b){
        int carry=(a&b)<<1;
        int  a=a^b;//xor operation
        b=carry;
    }
    return a;
}

};
int main(){
    solution s; 
    int a,b;
    cin>>a>>b;
    cout<<s.getSum(a,b)<<endl;
    return 0; 

}

