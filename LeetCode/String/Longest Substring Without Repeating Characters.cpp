#include<bits/stdc++.h>
using namespace std;
//Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, n = s.size(), ans = 0;
        unordered_map<char, int> freq;
        while (j < n) {
            freq[s[j]]++;
            while (freq[s[j]] > 1) {
                freq[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
int main(){
    Solution obj;
    cout<<obj.lengthOfLongestSubstring("abcabcbb");
}