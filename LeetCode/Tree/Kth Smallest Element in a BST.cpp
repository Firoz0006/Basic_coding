#include<bits/stdc++.h>
using namespace std;
//kth smallest element in a BST
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
vector<int> ans;
void f(TreeNode* root){
    if(root==NULL) return ;
    f(root->left);
    ans.push_back(root->val);
    f(root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        f(root);
       int n=ans.size();
       return ans[k-1];
    }
};