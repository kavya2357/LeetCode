/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
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
    void paths(vector<string>&ans,string path,TreeNode* root){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            path+=to_string(root->val);
            ans.push_back(path);
            return;
        }
        path+=to_string(root->val)+"->";
        paths(ans,path,root->left);
        paths(ans,path,root->right);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string path="";
        paths(ans,path,root);
        return ans;
    }
};
// @lc code=end

