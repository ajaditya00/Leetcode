class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>st;
        unordered_set<int>st1;

        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    st.insert(i);
                    st1.insert(j);
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(st.find(i)!=st.end()||st1.find(j)!=st1.end()){
                    matrix[i][j]=0;
                }
            }
        }
    
    }
};