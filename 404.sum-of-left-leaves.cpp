/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
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
    bool isLeaf(TreeNode* root){
        if(root->left==nullptr && root->right==nullptr) return true;
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            TreeNode *node=q.front();
            q.pop();
            if(node->left!=nullptr){
                q.push(node->left);
                if(isLeaf(node->left)){
                    sum+=node->left->val;
                }
            }
            if(node->right!=nullptr){
                q.push(node->right);
            }
        }
        return sum;
    }
};
// @lc code=end

