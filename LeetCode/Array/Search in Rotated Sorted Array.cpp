#include<bits/stdc++.h>
using namespace std;

// search in Rotated Sorted Array
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target)//find my element
            return mid;
            else if(arr[mid]>=arr[0])//left side
            {
                if(arr[start]<=target&&arr[mid]>target)
                end=mid-1;
                else
                start=mid+1;
            }
            else//right side sorted
            {
                if(arr[mid]<target&&arr[end]>=target)
                start=mid+1;
                else
                end=mid-1;
            }
        }
        return -1;
        
    }
};
int main(){
    Solution s;
    vector<int> arr={4,5,6,7,0,1,2};
    cout<<s.search(arr,0);
    return 0;
}