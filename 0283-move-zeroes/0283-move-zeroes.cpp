class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans[cnt]=nums[i];
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};