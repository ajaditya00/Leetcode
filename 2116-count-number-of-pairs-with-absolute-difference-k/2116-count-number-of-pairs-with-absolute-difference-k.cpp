class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cnt = 0;
        for (int num : nums) {
            if (mp.find(num - k) != mp.end()) {
                cnt += mp[num - k];
            }
            if (mp.find(num + k) != mp.end()) {
                cnt += mp[num + k];
            }
            mp[num]++;
        }

        return cnt;
    }
};
