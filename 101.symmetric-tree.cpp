/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool check(TreeNode *left, TreeNode *right){
        //doing this because if left/right is null we can't use left->val
        //so check if the root is null in begining
        if(left==NULL || right==NULL) return left==right;

        if(left->val!=right->val) return false;
        return check(left->left,right->right) && check(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
    }
};
// @lc code=end

