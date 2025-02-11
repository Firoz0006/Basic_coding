#include<bits/stdc++.h>
using namespace std;
//Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& arr) {
        int start=0,end=arr.size()-1,ans=arr[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=arr[0])//left side sorted array
            start=mid+1;//right side sorted array
            else
            {
                ans=arr[mid];
                end=mid-1;
            }
        }
        return ans;
        
    }
};
int main(){
    Solution s;
    vector<int> arr={3,4,5,1,2};//1
    cout<<s.findMin(arr);
    return 0;
    

}