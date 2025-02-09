class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto ele :  nums){
            mp[ele]++;
        }
        int cnt=0;
        for(auto x:mp){
            if(x.second<=1){
                cnt=x.first;
            }
        }
        return cnt;
    }
};