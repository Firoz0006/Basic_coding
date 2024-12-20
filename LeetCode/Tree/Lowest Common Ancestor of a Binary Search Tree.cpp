#include<bits/stdc++.h>
using namespace std;
//lowest common ancestor of a binary search tree

  //Definition for a binary tree node.
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root) {
            if ((root->val > p->val) && (root->val > q->val))
                root = root->left;
            else if ((root->val < p->val) && (root->val < q->val))
                root = root->right;
            else 
                break;
        }
        return root;
    }
};
int main(){
    Solution obj;
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    TreeNode* p = root->left;
    TreeNode* q = root->left->right;
    TreeNode* res = obj.lowestCommonAncestor(root, p, q);
    cout << res->val;
    return 0;
}