#include<bits/stdc++.h>
using namespace std;

int main(){//palindrom check using iterative method
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.size();
    // int i=0,j=n-1;

    // while(i<=j){
    //     if(s[i]==s[j]){
    //         i++;
    //         j--;
        
    //     }
    //     else{
    //         cout<<"Not Palindrome";
    //         return 0;
    //     }
    // }

    // other way of palindrom check

    // while(i<=j){
    //     if(s[i]!=s[j]){
    //         cout<<"Not Palindrome";
    //         return 0;
    //     }
    //     i++;
    //     j--;
    // }
    // cout<<"Palindrome";
    
    // other ways to solve palindrom

    // for(int i=0;i<n/2;i++){
    //     if(s[i]!=s[n-i-1]){
    //         cout<<"Not palindrome";
    //         return 0;            
    //     }
    // }
    // using stack to check palindrom
    stack<char> st;
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    for(int i=0;i<n;i++){
        if(st.top()!=s[i]){
            cout<<"Not palindrome";
        }
        st.pop();
    }
    cout<<"Palindrome";
    return 0;
}
