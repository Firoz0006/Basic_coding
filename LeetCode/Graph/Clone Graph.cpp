#include<bits/stdc++.h>
using namespace std;
// clone a graph
class Solution {//using DFS
public:
    Node* cloneGraph(Node* node) {
        if (!node) {
            return NULL;
        }
        if (copies.find(node) == copies.end()) {
            copies[node] = new Node(node -> val, {});
            for (Node* neighbor : node -> neighbors) {
                copies[node] -> neighbors.push_back(cloneGraph(neighbor));
            }
        }
        return copies[node];
    }
private:
    unordered_map<Node*, Node*> copies;
};
int main(){
    Solution obj;
    cout<<obj.cloneGraph();
    return 0;

}