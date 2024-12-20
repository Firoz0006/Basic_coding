#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge_sort(int arr[], int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;
            merge_sort(arr, l, mid);         // Sort the left half
            merge_sort(arr, mid + 1, r);     // Sort the right half
            merge(arr, l, mid, r);           // Merge the sorted halves
        }
    }

    void merge(int arr[], int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;

        int L[n1], R[n2];

        for (int i = 0; i < n1; i++) L[i] = arr[l + i];
        for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) arr[k++] = L[i++];
            else arr[k++] = R[j++];
        }

        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];
    }
};
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    Solution ob;
    ob.merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
