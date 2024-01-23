/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
    int sum(TreeNode *root, int &res){
        if(root==NULL) return 0;

        int left=max(0,sum(root->left,res));
        int right=max(0,sum(root->right,res));
        res=max(res, left+right+root->val);
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        sum(root,res);
        return res;
    }
};
// @lc code=end

