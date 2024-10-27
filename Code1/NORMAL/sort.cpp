#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {6, 4, 7, 8, 6, 7, 6};
    int n = sizeof(arr) / sizeof(int); // Correct way to get the size of a built-in array

    sort(begin(arr), end(arr)); // Sorting using iterators

    // Outputting the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
