#include<bits/stdc++.h>
using namespace std;
//valid palindrome
class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end)
       {
            if(isalnum(s[start])==false)
            {
                start++;
                continue;
            }
    
            if(isalnum(s[end])==false)
            {
                end--;
                continue;
            }

            char ch1=tolower(s[start]);
            char ch2=tolower(s[end]);
            cout << ch1 << " " <<ch2 << endl;
            if(ch1!=ch2)
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};