#include<bits/stdc++.h>
using namespace std;
// house robber II
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        return max(getMax(nums, 0, nums.size() - 2), getMax(nums, 1, nums.size() - 1));        
    }

private:
    int getMax(vector<int>& nums, int start, int end) {
        int prevRob = 0, maxRob = 0;

        for (int i = start; i <= end; ++i) {
            int temp = max(maxRob, prevRob + nums[i]);
            prevRob = maxRob;
            maxRob = temp;
        }

        return maxRob;
    }    
};
int main() {
    Solution obj;
    vector<int> nums = {1,2, 3, };
    cout << obj.rob(nums);
    return 0;
}