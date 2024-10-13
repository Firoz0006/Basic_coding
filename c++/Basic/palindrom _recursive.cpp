#include<bits/stdc++.h>
using namespace std;

int solve(string s, int i, int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return solve(s,i+1,j-1);
}
int main(){ //palindrom check using recursive method
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.size();
    int i=0,j=n-1;
    if(solve(s,i,j)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}