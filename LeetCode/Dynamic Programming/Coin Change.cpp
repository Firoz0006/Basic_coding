#include<bits/stdc++.h>
using namespace std;
//coin change 11=5+5+1
class Solution {
public:
    int coinChange(vector<int>& coins, int target) {
        
        int n=coins.size();
        vector<int> dp(target+1,target+1);
        dp[0]=0;
        for(int i=1;i<=target;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i)
                    dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
        return dp[target]!=target+1 ? dp[target] : -1;
    }
};
int main(){
    Solution s;
    vector<int> coins={1,2,5};
    int target=11;
    cout<<s.coinChange(coins,target);
    return 0;
}