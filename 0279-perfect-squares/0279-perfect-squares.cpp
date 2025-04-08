class Solution {
public:
    bool check(int n) {
        int s = (int)(sqrt(n));
        return (s * s == n);
    }

    int helper(int n, vector<int>& dp) {
        if (check(n))
            return 1;
        if (dp[n] != -1)
            return dp[n];
        int res = INT_MAX;
        for (int i = 1; i * i <= n; i++) {
            int m = 1 + helper(n - i * i, dp);
            res = min(m, res);
        }

        dp[n] = res;
        return dp[n];
    }

    int numSquares(int n) {
        vector<int> dp(n + 1, -1);
        return helper(n, dp);
    }
};
