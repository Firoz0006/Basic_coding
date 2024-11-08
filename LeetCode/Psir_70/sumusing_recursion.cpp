#include<bits/stdc++.h>
using namespace std;
//sum of elements of an array using recursion

class Solution {
public:
    int sum(int arr[], int n) {
        if(n==0) return 0;
        return arr[0] + sum(arr+1, n-1);
    }

};


int main() {
    Solution obj;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<obj.sum(arr, n);
    return 0;
}


// using vector as an argument
// class Solution {
// public:
//     int sum(vector<int> arr, int n) {

//         if(n==0) return 0;
//         return arr[n-1] + sum(arr, n-1);
//     }

// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4,5};
//     int n = arr.size();
//     cout<<obj.sum(arr, n);
//     return 0;
// }