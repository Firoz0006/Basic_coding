#include<bits/stdc++.h>
using namespace std;

//Product of Array Except Self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= right;
            right *= nums[i];
        }
        return res;

    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4};//output={24,12,8,6}
    vector<int> res=s.productExceptSelf(nums);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}
        