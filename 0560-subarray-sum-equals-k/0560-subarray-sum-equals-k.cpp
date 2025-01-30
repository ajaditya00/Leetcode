class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n, 0);
        pre[0] = nums[0];
        unordered_map<int, int> mp;
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (pre[i] == k) {
                cnt++;
            }
            int c = pre[i] - k;
            if (mp.find(c) != mp.end()) {
                cnt+=mp[c];
            }
            mp[pre[i]]++;
        }
    return cnt;
    }
};