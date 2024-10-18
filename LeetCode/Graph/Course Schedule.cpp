#include<bits/stdc++.h>
using namespace std;
//course schedule

class Solution {
private:
    bool dfs(int node, vector<int> adj[], vector<int>& vis) {
        vis[node] = 2;
        for (auto it: adj[node]) {
            if (vis[it] == 0) {
                if (dfs(it, adj, vis) == true)
                    return true;
            } else if (vis[it] == 2) {
                return true;
            }
        }
        vis[node] = 1;
        return false;  
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector <int> vis(numCourses, 0);
        vector <int> adj[numCourses];
        for (int i = 0; i < n; i++) 
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        for (int i = 0; i < numCourses; i++) {
            if (vis[i] == 0) {
                if (dfs(i, adj, vis) == true)
                    return false;
            }
        }
        return true;
    }
};