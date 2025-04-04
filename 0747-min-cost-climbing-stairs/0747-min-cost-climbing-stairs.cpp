class Solution {
public:
    int mincost(vector<int>& cost,int i,vector<int>&dp){
        if(i==0 || i==1) return cost[i];
        if(dp[i]!=-1) return dp[i];
        return dp[i]=cost[i]+min(mincost(cost,i-1,dp),mincost(cost,i-2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
    }
};