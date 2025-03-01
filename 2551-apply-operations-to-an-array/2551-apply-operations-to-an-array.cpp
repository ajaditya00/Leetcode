class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]=nums[i-1]*2;
                nums[i]=0;
            }
        }
        int k=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                ans[k]=nums[j];
                k++;
            }
        }
        return ans;

    }
};