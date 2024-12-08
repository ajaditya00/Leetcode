class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return helper(root)!=-1;
        }
int helper(TreeNode* root){
        if(root==NULL) return false;
        int l=helper(root->left);
        if(l==-1) return -1;
        int r=helper(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1) return -1;
        return max(l,r)+1;
    }
};