/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
    int getDiameter(TreeNode *root,int &diameter){
        if(root==nullptr){
            return 0;
        }
        int left_height=getDiameter(root->left,diameter);
        int right_height=getDiameter(root->right,diameter);
        int max_diameter=left_height+right_height;
        diameter=max(diameter,max_diameter);
        return max(left_height,right_height) +1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        getDiameter(root,diameter);
        return diameter;
    }
};
// @lc code=end

