class Solution {
public:
    int tri(int n,vector<int>&dp){
        if(n==0)return 0;
        if(n==1 || n==2) return 1;
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        if(dp[n]!=0)return dp[n];
        return dp[n]=tri(n-3,dp)+tri(n-2,dp)+tri(n-1,dp);
    }
    int tribonacci(int n) {
        vector<int>dp(38,0);
        return tri(n,dp);
    }
};