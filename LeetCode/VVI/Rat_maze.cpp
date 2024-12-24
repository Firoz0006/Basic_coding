#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
 void helper(vector<vector<int>> &mat, int r, int c, string path,
  vector<string> &ans) {
    int n = mat.size(); // Number of rows
    int m = mat[0].size(); // Number of columns

    // Boundary and invalid cell check
    if (r < 0 || c < 0 || r >= n || c >= m || mat[r][c] == 0 || mat[r][c] == -1) {
        return;
    }

    // If we reach the bottom-right corner, store the path and return
    if (r == n - 1 && c == m - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    mat[r][c] = -1;

    // Explore all 4 possible directions
    helper(mat, r + 1, c, path + "D", ans); // Down
    helper(mat, r - 1, c, path + "U", ans); // Up
    helper(mat, r, c - 1, path + "L", ans); // Left
    helper(mat, r, c + 1, path + "R", ans); // Right

    // Backtrack: Unmark the current cell
    mat[r][c] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat, int n) {
        vector<string> ans;
        if (n == 0 || mat[0][0] == 0 ){
            return ans;
        }

        helper(mat, 0, 0, "", ans);
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>> mat = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};
    int n = mat.size();
    vector<string> ans = s.findPath(mat, n);
    for (string s : ans) {
        cout << s << endl;
    }
    return 0;
}
