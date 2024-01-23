/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        //specifies direction
        //1->R to L
        int flag=0;  //0->L to R 
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            vector<int>temp(len);
            for(int i=0;i<len;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(flag==0){
                    temp[i]=curr->val;
                }else{
                    temp[len-1-i]=curr->val;
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            flag=!flag;
            res.push_back(temp);
        }
        return res;
    }
};
// @lc code=end

