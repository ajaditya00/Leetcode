class Solution {
public:
    long long ways(int i, int res, vector<int>& nums, vector<vector<long long>>& dp, int x) {
        if (i == nums.size())
            return 0;
        if (dp[i][res] != -1)
            return dp[i][res];

        long long t = nums[i];
        if (nums[i] % 2 != res)
            t -= x;
        long long take = ways(i + 1, nums[i] % 2, nums, dp, x);
        long long nottake = ways(i + 1, res, nums, dp, x);
        return dp[i][res] = max(take + t, nottake);
    }

    long long maxScore(vector<int>& nums, int x) {
        int n = nums.size();
        vector<vector<long long>> dp(n, vector<long long>(2, -1));
        return nums[0] + ways(1, nums[0] % 2, nums, dp, x);
    }
};