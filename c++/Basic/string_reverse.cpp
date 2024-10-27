#include<bits/stdc++.h>
using namespace std;

//Reverse a string

int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;


    // 1) reverse(s.begin(),s.end());
    // cout<<s;

    //-----------------------------------------------------

    //    for(int i=s.size()-1;i>=0;i--){
    //     cout<<s[i];
    // }
//--------------------------------------------------
    // 3) int n= s.size();
    // for(int i=n-1;i>=0;i--){
    //     cout<<s[i];
    // }

    // using two pointer concept
    //----------------------------------------------

    // 4) int i=0,j=s.size()-1;

    // while(i<j){
    //     swap(s[i],s[j]);
    //     i++;
    //     j--;
    // }
    // cout<<s;
    //-----------------------------------------------

    stack<char> st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop(); 
    }
    return 0;
}