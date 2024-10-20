#include<bits/stdc++.h>
using namespace std;

//Contain Duplicate Leetcode Problem

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;


        
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,2,1};
    cout<<"Duplicate no:"<<s.containsDuplicate(nums)<<endl;
}