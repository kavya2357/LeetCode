/*
 * @lc app=leetcode id=863 lang=cpp
 *
 * [863] All Nodes Distance K in Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>parent_map;
    void dfs(TreeNode* root,TreeNode* parent){
        if(root==NULL) return;
        parent_map[root]=parent;
        dfs(root->left,root);
        dfs(root->right,root);
    }
    unordered_map<TreeNode*,bool>visited;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root,NULL);
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int level=0;
        while(!q.empty()){
            if(level==k) break;
            level++;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left && visited[node->left]!=true){
                    q.push(node->left);
                    visited[node->left]=true;
                }
                if(node->right && visited[node->right]!=true){
                    q.push(node->right);
                    visited[node->right]=true;
                }
                if(parent_map[node] && visited[parent_map[node]]!=true){
                    q.push(parent_map[node]);
                    visited[parent_map[node]]=true;
                }
            }   
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            ans.push_back(node->val);
        }
        return ans;
    }
};
// @lc code=end

