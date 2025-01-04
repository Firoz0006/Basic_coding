#include<bits/stdc++.h>
using namespace std;

//Graph Valid Tree

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];

        vector<bool> vis(n, 0);
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        if (!dfs(0, -1, adj, vis)){
         return false;
        }
        for(bool it : vis){
            if(!it){
                return false;
            }
        }
        return true;
    }
    bool dfs(int node, int parent, vector<int> adj[], vector<bool> &vis){
        vis[node] = true;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(!dfs(it, node, adj, vis)){
                    return false;
                }
            }else if(it != parent){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    //vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {1, 3}, {1, 4}};
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3},  {1, 4}};
    cout << s.validTree(5, edges) << endl;//output=0
    return 0;
}

            
 
