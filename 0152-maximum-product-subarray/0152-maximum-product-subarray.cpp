class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n =nums.size();
        int pro=1;
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            pro*=nums[i];
            m=max(m,pro);
            if(pro==0){
                pro=1;
            }
        }
        pro=1;
        for(int i=n-1;i>=0;i--){
            pro*=nums[i];
            m=max(m,pro);
            if(pro==0) pro=1;
        }
        return m;
    }
};