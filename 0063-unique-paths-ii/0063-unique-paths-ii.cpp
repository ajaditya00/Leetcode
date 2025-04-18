class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1) dp[i][j]=0;
                else if(i==0 && j==0)dp[i][j]=1;
                else{
                    int up=i>0 ?dp[i-1][j]:0;
                    int down=j>0 ? dp[i][j-1]:0;
                    dp[i][j]=up+down;
                }
            }
        }
        return dp[m-1][n-1];
    }
};