#include<bits/stdc++.h>
using namespace std;

//Maximum Sub Array Sum
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        int start = 1;
        int end = 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (start == 0) start = 1;
            if (end == 0) end = 1;
            start = start * nums[i];
            end = end * nums[nums.size()-1-i];
            res = max(res, max(start, end));
        }
        return res;
    }
};