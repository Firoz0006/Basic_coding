#include<bits/stdc++.h>
using namespace std;
//valid anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;

        
    }
};
int main(){
    string s,t;
    cin>>s>>t;
    Solution obj;
    cout<<obj.isAnagram(s,t);
    return 0;
}