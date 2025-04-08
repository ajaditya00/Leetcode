class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n =matrix[0].size();
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)continue;
                if(i>0 && j>0){
                    matrix[i][j]+=min({matrix[i-1][j],matrix[i][j-1],matrix[i-1][j-1]});
            
                }
                cnt+=matrix[i][j];
            }
        }
        return cnt;
    }
};