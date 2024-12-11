class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;;
        return 1+ max(level(root->left),level(root->right));
    }
    void NthLevel(TreeNode* root,int curr,int n,vector<int>&v){
        if(root==NULL) return;
        if(curr==n){
            v.push_back(root->val);
        }
        NthLevel(root->left,curr+1,n,v);
        NthLevel(root->right,curr+1,n,v);
    }
    void Lorder(TreeNode* root,vector<vector<int>>&ans){
        int n=level(root);
        for(int i=1;i<=n;i++){
            vector<int>v;
            NthLevel(root,1,i,v);
            ans.push_back(v);
            cout<<endl;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        Lorder(root,ans);
        return ans;
    }
};