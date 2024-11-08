#include<bits/stdc++.h>
using namespace std;
// reverse an array using recursion

class Solution {
public:
    void reverse(int arr[], int i, int j) {
        if(i>=j) return;
        swap(arr[i], arr[j]);
        reverse(arr, i+1, j-1);
    }
    
};
