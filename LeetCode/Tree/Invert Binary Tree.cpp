#include<bits/stdc++.h>
using namespace std;

//invert a binary tree
class Solution {
public:
    void swapNode(TreeNode* root){
        if(root==NULL) return;
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
        swapNode(root->left);
        swapNode(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        swapNode(root);
        return root;
    }
};