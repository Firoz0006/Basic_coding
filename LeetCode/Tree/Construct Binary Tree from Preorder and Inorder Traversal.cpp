#include<bits/stdc++.h>
using namespace std;
//construct binary tree from preorder and inorder traversal
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(preorder, inorder, 0, 0, inorder.size() - 1);
    }

private:
    TreeNode* solve(vector<int>& preorder,  vector<int>& inorder, 
                              int a, int b, int c) {
        if (a >= preorder.size() || b > c) {
            return nullptr;
        }
      
        TreeNode* root = new TreeNode(preorder[a]);
        int k = 0;
        for (int i = b; i <= c; i++) {
            if (inorder[i] == preorder[a]) {
                k = i;
                break;
            }
        }
        root->left = solve(preorder, inorder,a + 1, b,k - 1);
        root->right = solve(preorder, inorder, a + 1 +k - b, k + 1,c);
        
        return root;
    }
};
