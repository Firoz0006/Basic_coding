#include<bits/stdc++.h>
using namespace std;
//valid binary tree

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
vector<int>v;
void In(TreeNode* root){
    if(root){
    In(root->left);
    v.push_back(root->val);
    In(root->right);
}}
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        In(root);
        // sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                return false;
            }
        }
        return 1;
    }
};
int main(){
    Solution obj;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    cout<<obj.isValidBST(root);
    return 0;    
}