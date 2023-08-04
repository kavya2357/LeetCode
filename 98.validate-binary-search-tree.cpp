/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start
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
    bool isBST(TreeNode* root, long int min,long int max){
        if(root==NULL) return true;
        if(root->val>=max || root->val<=min){
            return false;
        }
        return isBST(root->left,min,root->val) && isBST(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root,LONG_MIN,LONG_MAX);
    }
};
// @lc code=end

