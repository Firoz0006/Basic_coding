#include<bits/stdc++.h>
using namespace std;

int   rotateArray(vector<int>& nums,int k){

    int n = nums.size();
     k = k%n;
    vector<int>temp(n);
    for(int i =0;i<n;i++){

        temp[(i+k)%n]= nums[i];
    }

        nums = temp;


}
int main(){
    int k=3;
    vector<int>nums = {1,2,3,4,5,6,7};
    rotateArray(nums,k);

    for(int num : nums){
        cout<<num<<" ";
    }
    return 0;
}