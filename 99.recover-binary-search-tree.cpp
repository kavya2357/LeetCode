TreeNode* first=NULL;
    TreeNode* second=NULL;
    TreeNode* prev=new TreeNode(INT_MIN);
    void recoverTree(TreeNode* root) {
        inorder(root);
        int temp=first->val;
        first->val=second->val;
        second->val=temp;
    }
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(first==NULL && prev->val>root->val){
            first=prev;
        }
        if(first!=NULL && prev->val > root->val){
            second=root;
        }
        prev=root;
        inorder(root->right);
    }