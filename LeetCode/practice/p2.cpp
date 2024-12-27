#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

//sort an array without using sort function
void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}
};
