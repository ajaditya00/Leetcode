class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int freq[100001] = {0};
        long long currentSum = 0, maxSum = 0;
        int cnt = 0;

        for (int i = 0; i < nums.size(); ++i) {
            currentSum += nums[i];
            freq[nums[i]]++;
            if (freq[nums[i]] == 1) cnt++;

            if (i >= k) {
                currentSum -= nums[i - k];
                freq[nums[i - k]]--;
                if (freq[nums[i - k]] == 0) cnt--;
            }

            if (i >= k - 1 && cnt == k) {
                maxSum = max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};
