/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>res;
        queue<pair<TreeNode*,pair<int,int>>>q; //Node, {line,level}
        //multiset sorts the array and also stores duplicates
        map<int,map<int,multiset<int>>>mp; //{line,{level,Node->val}}
        q.push({root,{0,0}});

        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode *curr=it.first;
            int line=it.second.first;
            int level=it.second.second;
            mp[line][level].insert(curr->val);
        
            if(curr->left){
                q.push({curr->left,{line-1,level+1}});
            }
            if(curr->right){
                q.push({curr->right,{line+1,level+1}});
            }
        }
        for(auto p:mp){
            vector<int>col;
            for(auto q:p.second){
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            res.push_back(col);
        }
        return res;
    }
};
// @lc code=end

