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
    int height(TreeNode *root){
        if(root==nullptr)
        return 0;
        int lefth = height(root->left);
        int righth = height(root->right);
        return 1+max(lefth,righth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int opt1 = diameterOfBinaryTree(root->left);
        int opt2 = diameterOfBinaryTree(root->right);
        int opt3 = height(root->left)+height(root->right);
        return max(opt1, max(opt2,opt3));
    }
};