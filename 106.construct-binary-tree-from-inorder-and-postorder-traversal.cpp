/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    TreeNode* build(int ps,int pe,vector<int>&postorder, int is,int ie,vector<int>inorder,map<int,int>&mp){
        if(ps>pe || is>ie) return NULL;

        TreeNode *root=new TreeNode(postorder[pe]);
        int idx=mp[root->val];
        int cnt=idx-is;
        root->left=build(ps,ps+cnt-1,postorder,is,idx-1,inorder,mp);
        root->right=build(ps+cnt,pe-1,postorder,idx+1,ie,inorder,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postStart=0,postEnd=postorder.size()-1;
        int inStart=0,inEnd=inorder.size()-1;

        map<int,int>mp;
        for(int i=0;i<=inEnd;i++){
            mp[inorder[i]]=i;
        }
        return build(postStart,postEnd,postorder,inStart,inEnd,inorder,mp);
    }
};
// @lc code=end

