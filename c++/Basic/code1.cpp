#include<bits/stdc++.h>

using namespace std;

int n, a, b;
vector<int> arr;
int solve() {
    int d = __gcd(a, b);

    for(int &i : arr) {
        i = i % d;
    }

    sort(arr.begin(), arr.end());

    int res = arr[n-1] - arr[0];

    for(int i = 1; i < n; i++) {
        res = min(res, arr[i-1] + d - arr[i]);
    }

    return res;
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> a >> b;

        arr = vector<int>(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = solve();

        cout << ans << "\n";
    }


    return 0;
}