class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int b=n/2;
        unordered_map<int,int>mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        for(auto x : mp){
            if (x.second > b) {
                return x.first;
            }
        }
        return -1;
    }
};