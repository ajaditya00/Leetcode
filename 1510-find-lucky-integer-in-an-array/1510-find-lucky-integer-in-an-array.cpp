class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto id:arr){
            mp[id]++;
        }
        int res=-1;
        for(auto id:mp){
            int val=id.first;
            int freq=id.second;
            if(val==freq){
                res = max(res,freq);
            }
        }
        return res;
    }
};