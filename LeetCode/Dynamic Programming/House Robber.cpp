#include<bits/stdc++.h>
using namespace std;
// house robber

class Solution {
public:
        vector<int>dp;
        int fun(vector<int>& nums,int n){
            
            if(n<=0) return 0;
            if(dp[n]!=-1) return dp[n];
            return dp[n]=max(fun(nums,n-1),nums[n-1]+fun(nums,n-2));
        }

    int rob(vector<int>& nums) {
        dp = vector<int>(nums.size() + 1, -1);
        int n=nums.size();
        //fill(dp.begin(),dp.end(),-1)
        return fun(nums,n);
        
    }
};
int main(){
    Solution obj;
    vector<int> nums={2,7,9,3,1};
    cout<<obj.rob(nums);
    return 0;
}