/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode* build(int ps,int pe,vector<int>&preorder,int is,int ie,vector<int>&    inorder,map<int,int>&mp){
        if(ps>pe || is>ie) return NULL;

        TreeNode *node=new TreeNode(preorder[ps]);
        int idx=mp[node->val]; //position of element in inorder array
        int cnt=idx-is; //count of elements
        node->left=build(ps+1,ps+cnt,preorder,is,idx-1,inorder,mp);
        node->right=build(ps+cnt+1,pe,preorder,idx+1,ie,inorder,mp);

        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preStart=0,preEnd=preorder.size()-1;
        int inStart=0,inEnd=inorder.size()-1;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;   //stores element to index
        }
        return build(preStart,preEnd,preorder,inStart,inEnd,inorder,mp);
    }
};
// @lc code=end

