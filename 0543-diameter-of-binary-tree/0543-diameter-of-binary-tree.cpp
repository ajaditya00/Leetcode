class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL)return NULL;
        return 1+max(level(root->left),level(root->right));
    }
    void helper(TreeNode* root,int &n){
        if(root==NULL)return;
        int d=level(root->left)+level(root->right);
        n=max(n,d);
        helper(root->left,n);
        helper(root->right,n);
    }
    int diameter(TreeNode* root){
        int m=0;
        helper(root,m);
        return m;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root);
        
    }
};