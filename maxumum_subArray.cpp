#include<bits/stdc++.h>
using namespace std;

int maximumSubArray(vector<int>&nums){
    int n = nums.size();
    int max_sum =INT_MIN;
    int sum = 0;

    for(int i =0;i<n;i++){
        sum += nums[i];
        max_sum = max(max_sum,sum);
        if(sum<0){
            sum = 0;

        }
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"enter the number" <<endl;
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maximumSubArray(nums)<<endl;
    return 0;
}

