class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long cnt=0;
        mp[nums[0]]=1;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-i;
        }
        for(int j=1;j<nums.size();j++){
            int c=mp[nums[j]];
            int total=j;
            int bad=total-c;
            cnt+=bad;
            mp[nums[j]]++;
        }
        return cnt;;
    }
};