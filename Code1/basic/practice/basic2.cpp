#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr) {
    map<int, int> countMap;

    // Step 1: Count the frequency of each element
    for (int num : arr) {
        countMap[num]++;
    }

    // Step 2: Overwrite the original array with sorted elements
    int index = 0;
    for (auto& pair : countMap) {
        while (pair.second > 0) {
            arr[index++] = pair.first;
            pair.second--;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    countingSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
