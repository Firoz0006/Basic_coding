#include<bits/stdc++.h>
using namespace std;

// search in Rotated Sorted Array
class Solution {

public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
                break;
            }
        }
        return -1;
        
    }
};
int main(){
    Solution s;
    vector<int>nums={4,5,6,7,0,1,2};
    int target=0;
    cout<<s.search(nums,target)<<endl;//output=4
    return 0;

}
