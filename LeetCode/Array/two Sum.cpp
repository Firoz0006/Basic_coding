#include<bits/stdc++.h>
using namespace std;
//Two sum Leetcode Problem
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {-1,-1};
        
    }
};
int main(){
    Solution s;
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> res=s.twoSum(nums,target);
    for(auto x:res){
        cout<<x<<" ";
    }

}

