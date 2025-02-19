#include<bits/stdc++.h>
using namespace std;
//combination sum IV
class Solution {
public:
    vector<int> dp;
    int combinationSum4Helper(vector<int>& nums,int target){
        if(target==0){
            return 1;
        }
        if(target<0){
            return 0;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=combinationSum4Helper(nums,target-nums[i]);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        dp=vector<int> (target+1,-1);
        return combinationSum4Helper(nums,target);
    }
};
int main(){
    Solution obj;
    vector<int> nums={1,2,3};
    cout<<obj.combinationSum4(nums,4);
    return 0;
}