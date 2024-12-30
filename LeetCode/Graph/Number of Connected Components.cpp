#include <bits/stdc++.h>
using namespace std;

// Number of connected components in an undirected graph
class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                count++;
                bfs(i, adj, vis);
            }
        }
        return count;
    }

    void bfs(int node, vector<int> adj[], vector<int>& vis) {
        queue<int> q;
        q.push(node);
        vis[node] = 1;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (auto neighbor : adj[curr]) {
                if (!vis[neighbor]) {
                    vis[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }
    }
};

int main() {
    Solution s;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {3, 4}};
    cout << s.countComponents(5, edges) << endl;//output=2
    return 0;
}