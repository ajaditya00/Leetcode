class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>ans;
        int i=1;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                if(i !=n/i){
                    ans.push_back(n/i);
                }
            }
        }
         sort(ans.begin(), ans.end());
        if (k > ans.size()) return -1;
        return ans[k - 1];
    }
};