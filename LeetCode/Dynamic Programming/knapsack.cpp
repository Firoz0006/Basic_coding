#include<bits/stdc++.h>
using namespace std;

//knapsack problem

class solution{
public:


int solve(int w, vector<int>& wt, vector<int>& val, int n) {
    if (n == 0 || w == 0) return 0; // Base case

    // Recursive logic for the knapsack
    if (wt[n - 1] <= w) {
        return max(
            val[n - 1] + solve(w - wt[n - 1], wt, val, n - 1),
            solve(w, wt, val, n - 1)
        );
    } else {
        return solve(w, wt, val, n - 1);
    }
}

    int knapSack(int w, vector<int>& wt, vector<int>& val) 
    {
        int n = wt.size();
        return solve(w, wt, val, n);
    }
};
int main(){
    solution s;
    vector<int> wt = {10, 20, 30};
    vector<int> val = {60, 100, 120};
    int w = 50;
    cout << s.knapSack(w, wt, val) << endl;
    return 0;
}
