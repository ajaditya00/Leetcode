class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long cnt=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
                ans+=(cnt-mp[i-nums[i]]);
                mp[i-nums[i]]++;
                cnt++;
        }
        return ans;
    }
};