#include<bits/stdc++.h>
using namespace std;
//jump game
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=0;
        for(int i =0;i<=n;i++){
            n = max(n,i+nums[i]);
            if(n>=nums.size()-1)return true;
        }
        return false;
    }
};