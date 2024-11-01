#include<bits/stdc++.h>
using namespace std;
//subtree of another tree
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        int target=subRoot->val;
        queue<TreeNode*> q;
        if(root){
            q.push(root);
        }
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left)
                q.push(cur->left);
            if(cur->right)
                q.push(cur->right);
            if(cur->val==target && isSameTree(cur,subRoot))
                return true;
        }
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL || p->val != q->val) {
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
int main() {
    Solution obj;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    TreeNode* subRoot = new TreeNode(3);
    subRoot->left = new TreeNode(9);
    subRoot->right = new TreeNode(20);
    subRoot->right->left = new TreeNode(15);
    subRoot->right->right = new TreeNode(7);
    cout << obj.isSubtree(root, subRoot);
    return 0;
}