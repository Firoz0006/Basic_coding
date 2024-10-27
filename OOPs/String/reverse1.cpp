#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& str,int n,int i){
    if(n<=i){
        return;
    }
    swap(str[i],str[n]);
    reverseStr(str,n-1,i+1);
}
int main(){
    string str="Firoz";
    reverseStr(str,str.length()-1,0);
    cout<<str;
    return 0;
}