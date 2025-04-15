class Solution {
public:
    int helper(int i, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0) return 0;
        if (i == nums.size() || target < 0) return -1;
        if (dp[i][target] != -2) return dp[i][target];

        int take = -1;
        int next = helper(i + 1, target - nums[i], nums, dp);
        if (next != -1) take = 1 + next;

        int notake = helper(i + 1, target, nums, dp);

        return dp[i][target] = max(take, notake);
    }

    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -2));
        int res = helper(0, target, nums, dp);
        return res == -1 ? -1 : res;
    }
};
