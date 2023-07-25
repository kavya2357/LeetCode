/*
 * @lc app=leetcode id=938 lang=cpp
 *
 * [938] Range Sum of BST
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
    int sum=0;
    void findSum(TreeNode* root,int low,int high){
        if(root==nullptr){
            return;
        }
        findSum(root->left,low,high);
        findSum(root->right,low,high);
        if(root->val>=low && root->val<=high) {sum+=root->val;}
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        findSum(root,low,high);
        return sum;
    }
};
// @lc code=end

