#include<bits/stdc++.h>
using namespace std;
//valid parenthesis
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;  
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(!st.empty() && abs(s[i]-st.top())<=2)
                st.pop();
            else 
                return false;
        }
        return st.empty();
        
    }
};