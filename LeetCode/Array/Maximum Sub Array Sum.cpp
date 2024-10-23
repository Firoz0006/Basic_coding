#include<bits/stdc++.h>
using namespace std;

//Maximum Sub Array Sum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int a = 0;
        for(int x : nums) {
			// could be just : ans = max(ans, a + x); a = max(0, a + x);
            a += x;
            ans = max(ans, a);
            a = max(a, 0);
        }
        return ans;
        
    }
};
int main(){
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums)<<endl;
    return 0;
}