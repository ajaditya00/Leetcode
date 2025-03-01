    class Solution {
    public:
        int helper(int m,int n,int i,int j,vector<vector<int>>& arr,vector<vector<int>>&dp){
            if(i>=m || j>=n) return 0;
            if(arr[i][j]==1) return 0;
            if(i == m-1 && j == n-1) return 1;
            if(dp[i][j] != -1) return dp[i][j];
            int s1=helper(m,n,i+1,j,arr,dp);
            int s2=helper(m,n,i,j+1,arr,dp);
            return dp[i][j]=s1+s2;
        }
        int uniquePathsWithObstacles(vector<vector<int>>& arr) {
            int m=arr.size() ,n=arr[0].size();
            if(arr[0][0] == 1 || arr[m-1][n-1] == 1) return 0;
            vector<vector<int>>dp(m,vector<int>(n,-1));
            return helper(m,n,0,0,arr,dp);
        }
    };