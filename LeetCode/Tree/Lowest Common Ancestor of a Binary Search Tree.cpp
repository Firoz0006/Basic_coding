#include<bits/stdc++.h>
using namespace std;
//lowest common ancestor of a binary search tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root)
            return NULL;
        // both in left
        if (p->val < root->val && q->val < root->val) {
            TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
            if (leftAns)
                return leftAns;
        }
        // both in right
        if (p->val > root->val && q->val > root->val) {
            TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
            if (rightAns)
                return rightAns;
        }
        return root;
    }
};