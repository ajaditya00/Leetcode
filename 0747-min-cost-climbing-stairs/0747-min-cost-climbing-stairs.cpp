class Solution {
public:
    int helper(vector<int>&cost,int i,vector<int>&dp){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int one=cost[i]+ helper(cost,i-1,dp);
        int second=cost[i]+helper(cost,i-2,dp);
        return dp[i]=min(one,second);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
    }
};