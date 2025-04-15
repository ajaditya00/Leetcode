class Solution {
public:
    int sum=0;
    int ways(int i,vector<int>&nums,int res,int t,vector<vector<int>>&dp){
        if(i==nums.size()){
            if(res==t) return 1;
            else return 0;
        }
        if(dp[i][res+sum]!=-1) return dp[i][res+sum];
        int take=ways(i+1,nums,res+nums[i],t,dp);
        int nottake=ways(i+1,nums,res-nums[i],t,dp);
        return dp[i][res+sum] =(take + nottake);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        sum = accumulate(nums.begin(), nums.end(), 0);
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(2*sum+1,-1));
        return ways(0,nums,0,target,dp);
    }
};