#include<bits/stdc++.h>
using namespace std;

// remove a particular character from a string using recursion

class Solution {
public:
    void removeParticularChar(string &s, char x) {
        int j = 0; // To keep track of the next position in the modified string
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != x) {
                s[j] = s[i];
                j++;
            }
        }
        s.resize(j); // Resize the string to remove extra characters
    }
};

int main() {
    Solution obj;
    string s = "axbxcxdx";
    char c = 'x';
    obj.removeParticularChar(s, c);
    cout << s; // Expected output: "abcd"
    return 0;
}