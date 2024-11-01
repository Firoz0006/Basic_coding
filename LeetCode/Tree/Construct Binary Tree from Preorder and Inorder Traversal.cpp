#include<bits/stdc++.h>
using namespace std;
//construct binary tree from preorder and inorder traversal

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
    int idx=0;
    unordered_map<int,int>mp;
    //lb: lowerbound , ub: upperbound 
    TreeNode* helper(vector<int>& preorder,int lb, int ub)
    {
        if(lb>ub) return NULL;
        TreeNode* root = new TreeNode(preorder[idx++]);
        int mid = mp[root->val];
        root->left = helper(preorder,lb,mid-1);  
        root->right= helper(preorder,mid+1,ub);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        for(int i =0;i<n;i++) mp[inorder[i]]=i;
        TreeNode* root = helper(preorder,0,n-1);
        return root;
    }
};
int main(){
    Solution obj;
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    TreeNode* root = obj.buildTree(preorder,inorder);
    return 0;
}
