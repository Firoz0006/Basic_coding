#include<bits/stdc++.h>
using namespace std;
int main(){
string str="Firoz";
int n= str.size();
string res=str;
for(int i=0;i<n;i++){
    res[i]=str[n-1-i];
}
    cout<< res<< endl;
}
