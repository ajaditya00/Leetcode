class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        // int m=grid[0].size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int>ans(2);
        for(auto it:mp){
            int key=it.first;
            int val=it.second;
            if(val==2){
                ans[0]=key;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(mp.find(i)==mp.end()){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};