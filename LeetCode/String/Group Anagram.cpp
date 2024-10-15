#include<bits/stdc++.h>
using namespace std;
//group anagram
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(string s: strs){
            string s2=s;
            sort(s2.begin(),s2.end());
            m[s2].push_back(s);
        }
        vector<vector<string>> v;
        for(auto p : m){
            v.push_back(p.second);
        }
        return v;
    }
};