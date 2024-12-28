#include<bits/stdc++.h>
using namespace std;

//Maximum product SubArray 
class Solution {
public:
    int maxProduct(vector<int>& nums){
        int res = INT_MIN;
        int start = 1,n=nums.size(),end = 1;

        for (int i = 0; i < n; ++i) {
            if (start == 0) start = 1;
            if (end == 0) end = 1;
            start = start * nums[i];
            end = end * nums[n-1-i];
            res = max(res, max(start, end));
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int>nums={2,3,-2,4};//output=2*3
    cout<<s.maxProduct(nums)<<endl;
    return 0;

}