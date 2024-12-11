class Solution {
public:
    int depth(TreeNode* root, int& len) {
        if (!root) {
            return 0;
        }
        int l = depth(root->left, len);
        int r = depth(root->right, len);
        len = max(len, l + r);
        return 1 + max(l, r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int len = 0;
        if (!root) {
            return 0;
        }
        depth(root, len);
        return len;
    }
};