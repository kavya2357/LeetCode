/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
    void flatten(TreeNode* root) {
        if(root==NULL) return;

        TreeNode *templeft=root->left;
        TreeNode *tempright=root->right;

        root->left=NULL;
        flatten(templeft);
        flatten(tempright);

        root->right=templeft;
        TreeNode *curr=root;
        while(curr->right!=NULL) curr=curr->right;
        curr->right=tempright;
    }
};
// @lc code=end

