#include<bits/stdc++.h>
using namespace std;
//longest increasing subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();

        int dp[n+1];

        dp[1]=1;

        for(int i=2;i<=n;i++)
        {
            dp[i]=1;
            for(int j=i-1;j>=1;j--)
            {
                if(nums[i-1]>nums[j-1])
                {
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
        ans=max(ans,dp[i]);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int> nums={10,9,2,5,3,7,101,18};
    cout<<obj.lengthOfLIS(nums);
    return 0;
}