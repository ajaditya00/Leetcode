class Solution {
public:
    int rec(int i,vector<int>& nums,vector<int>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=nums[i]+rec(i+2,nums,dp);
        int take2=rec(i+1, nums,dp);
        return dp[i] = max(take, take2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return rec(0,nums,dp);
    }
};