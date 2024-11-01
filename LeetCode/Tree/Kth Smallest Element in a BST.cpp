#include<bits/stdc++.h>
using namespace std;
//kth smallest element in a BST

  //Definition for a binary tree node.
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
    void inorder(TreeNode* root, vector<int>& ans){
        if(root == NULL) return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;

        inorder(root, ans);

        return ans[k - 1];
    }
};
int main(){
    Solution obj;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    int k = 2;
    cout<<obj.kthSmallest(root, k);
    return 0;
}