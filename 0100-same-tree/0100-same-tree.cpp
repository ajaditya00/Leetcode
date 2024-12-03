class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL && q != NULL)
            return false;
        if (p!= NULL && q == NULL)
            return false;

        if (p->val != q->val)
            return false;
        bool ok = isSameTree(p->left, q->left);
        if (ok == false)
            return false;
        bool ok1 = isSameTree(p->right, q->right);
        if (ok1 == false)
            return false;
        return true;
    }
};