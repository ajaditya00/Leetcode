class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        for(auto ele:nums1){
            mp[ele[0]]=ele[1];
            st.insert(ele[0]);
        }
        for(auto s:nums2){
            st.insert(s[0]);
        }
        vector<vector<int>> ans(st.size(),vector<int>(2));
        int k=0;
        for(auto it:nums2){
            if(mp.find(it[0])!=mp.end()){
                ans[k][0]=it[0];
                ans[k][1]=it[1]+mp[it[0]];
                k++;
                mp[it[0]]=0;
            }else{
                ans[k][0]=it[0];
                ans[k][1]=it[1];
                k++;
            }
        }
        for(auto it:mp){
            if(it.second!=0){
                ans[k][0]=it.first;
                ans[k][1]=it.second;
                k++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};