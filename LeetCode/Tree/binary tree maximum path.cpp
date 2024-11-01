#include<bits/stdc++.h>
using namespace std;
//binary tree maximum path sum

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};
class Solution {
    int answer;
    // max path going down
    int dfs(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        int x = dfs(root->left);
        int y = dfs(root->right);
        answer = max(answer, x + y + root->val);
        return max(0, root->val + max(x, y));
    }
public:
    int maxPathSum(TreeNode* root) {
        answer = INT_MIN;
        dfs(root);
        return answer;
    }
};
int main() {
    Solution obj;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << obj.maxPathSum(root) << endl;
    return 0;
}
