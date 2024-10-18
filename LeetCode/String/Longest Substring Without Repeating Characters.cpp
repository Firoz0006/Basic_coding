#include<bits/stdc++.h>
using namespace std;
//Longest Substring Without Repeating Characters
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        c = {}
        l = 0
        length = 0
        for r in range(len(s)):
            char = s[r]
            if char in c and c[char] >= l:
                l = c[char] + 1
            else:
                length = max(length, r - l + 1)
            c[char] = r
        return length

        
        