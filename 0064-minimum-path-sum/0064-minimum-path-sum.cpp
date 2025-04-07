class Solution {
public:
    int helper(int m, int n, vector<vector<int>>& dp, vector<vector<int>>& grid){
        if(m==1 && n==1) return grid[0][0];
        if(m<1 || n<1) return INT_MAX;
        if(dp[m-1][n-1]!=-1)return dp[m-1][n-1];
        return dp[m-1][n-1]=grid[m-1][n-1]+min(helper(m-1,n,dp,grid),helper(m,n-1,dp,grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(m,n,dp,grid);
    }
};