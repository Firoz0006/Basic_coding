#include<bits/stdc++.h>
using namespace std;
//valid parenthesis
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for (char c : s) {
            low += (c == '(') ? 1 : -1;
            high += (c != ')') ? 1 : -1;
            if (high < 0) break; // No ')' to match '*'
            low = max(low, 0); // Ensure low doesn't go negative
        }
        return low == 0;
    }
};
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    Solution obj;
    cout<<obj.checkValidString(s);
    return 0;
}