#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void quick_sort(int arr[], int l, int r) {
        if (l < r) {
            int pi = partition(arr, l, r);
            quick_sort(arr, l, pi - 1);
            quick_sort(arr, pi + 1, r);
        }
    }

    int partition(int arr[], int l, int r) {
        int pivot = arr[r];
        int i = l - 1;
        for (int j = l; j < r; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[r]);
        return i + 1;
    }
};