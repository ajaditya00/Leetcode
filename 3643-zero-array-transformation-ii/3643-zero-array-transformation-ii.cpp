class Solution {
public:
    bool IsZero(vector<int>& nums, vector<vector<int>>& querie,int k) {
        int n = nums.size();
        vector<int> pre(n + 1, 0);
        for (int i = 0; i < k; i++) {
            int l = querie[i][0];   
            int r = querie[i][1];   
            int val = querie[i][2]; 
            pre[l] += val;
            if (r + 1 < n) {
                pre[r + 1] -= val;
            }
        }
        for (int i = 1; i <= n; i++) {
            pre[i] += pre[i - 1];
        }
        for (int i=0; i < n; i++) {
            if (pre[i] < nums[i])
                return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int low = 0, high = queries.size(), n = queries.size(), ans = n + 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (IsZero(nums, queries, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return (ans > n) ? -1 : ans;
    }
};