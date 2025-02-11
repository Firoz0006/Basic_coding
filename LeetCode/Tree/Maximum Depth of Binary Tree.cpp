#include<bits/stdc++.h>
using namespace std;
//Maximum Depth of Binary Tree
 // Definition for a binary tree node.
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){ 
            return 0;
        }
        int left=1+maxDepth(root->left);
        int right=1+maxDepth(root->right);
        return max(left,right);
    }
};
int main(){
    Solution obj;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout<<obj.maxDepth(root);
    return 0;
}