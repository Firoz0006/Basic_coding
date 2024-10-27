#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {2, 3, 5, 8, 25, 0, 1};
    int n = sizeof(a) / sizeof(int); // Correct calculation of array size
    sort(a, a + n);
    cout << a[0] << endl; // Print the largest element
    return 0;
}
