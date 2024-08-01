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
    bool solve(TreeNode* r, int &tar , int res = 0){
        if(r == 0)
        return 0; 
        res = res+r->val;
        if(r->left == 0 && r->right == 0){
            if(res == tar)
            return 1;       
            else
            return 0; 
        }
       bool left =  solve(r->left,tar,res); 
       bool right =  solve(r->right,tar,res); 
       return left || right ; 
    }
public:
    bool hasPathSum(TreeNode* root, int tar) {
        if(root == 0)
            return 0; 
        int res = 0; 
         return solve(root , tar);
        }
};