/*
 * @lc app=leetcode id=173 lang=cpp
 *
 * [173] Binary Search Tree Iterator
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
class BSTIterator {
public:
    stack<TreeNode*>s;
    BSTIterator(TreeNode* root) {
        TreeNode* node=root;
        while(node!=NULL){
            s.push(node);
            node=node->left;
        }
    }
    
    int next() {
        TreeNode* temp=s.top();
        s.pop();
        if(temp->right!=NULL){
            TreeNode* temp1=temp->right;
            while(temp1!=NULL){
                s.push(temp1);
                temp1=temp1->left;
            }
        }
        return temp->val;
    }
    
    bool hasNext() {
        if(s.empty()) return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

