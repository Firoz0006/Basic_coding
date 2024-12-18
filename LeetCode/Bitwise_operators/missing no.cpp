#include<bits/stdc++.h>
using namespace std;

//missing no in array of n elements
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^nums[i];
        }
        for(int i=0;i<=n;i++){
            ans=ans^i;
        }
        return ans;
    }

};
int main(){
    Solution s;
    vector<int>nums={3,0,1};
    cout<<"missing number : "<<s.missingNumber(nums);
    return 0;
}

//--------------------------------------------------------------------------------
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int sum1 = n * (n + 1) / 2;
//         int sum2 = 0;
//         for (int i = 0; i < n; i++) {
//             sum2 += nums[i];
//         }
//         return sum1 - sum2;
//     }
// };
