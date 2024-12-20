#include<bits/stdc++.h>
using namespace std;
//climbing stairs

class Solution {
public:
    int climbStairs(int n) {
        // if(n==0 ||n==1) //using the recursion
        // {
        //     return 1;
        // }
        // return climbStairs(n-1)+climbStairs(n-2);
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};int main(){
    Solution obj;
    cout<<obj.climbStairs(3);
    return 0;
}
        