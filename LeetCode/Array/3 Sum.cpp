#include<bits/stdc++.h>
using namespace std;
//3 Sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int total=nums[i]+nums[j]+nums[k];
                if(total>0)
                    k-=1;
                else if(total<0)
                    j+=1;
                else{
                    res.push_back({nums[i],nums[j],nums[k]});
                    j+=1;
                    while(nums[j]==nums[j-1] && j<k){
                        j+=1;
                    }
                }
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> res=s.threeSum(nums);
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}