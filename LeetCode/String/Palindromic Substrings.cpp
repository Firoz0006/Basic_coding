#include<bits/stdc++.h>
using namespace std;
//palindromic substrings
class Solution {
public:
bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int countSubstrings( string s) {
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (isPalindrome(s, i, j)) {
                count++;
            }
        }
    }
    return count;
    }
};
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    Solution obj;
    cout<<obj.countSubstrings(s);
    return 0;   
}