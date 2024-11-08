#include<bits/stdc++.h>
using namespace std;

// find weither an array is sorted or not using recursion

class Solution {
public:
    bool isSorted(int arr[], int n) {
        if(n==0||n==1) return true;

        if(arr[n-1] < arr[n-2]) return false;
        return isSorted(arr, n-1);


        //return (arr[n-1] < arr[n-2]) ? false : isSorted(arr, n-1);
    }
};

int main() {
    Solution obj;
    int arr[] = {1,2,3,4,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<obj.isSorted(arr, n);
    return 0;
}