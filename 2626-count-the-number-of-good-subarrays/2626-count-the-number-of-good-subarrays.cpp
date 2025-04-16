class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0;
        long long p = 0, g = 0;

        for (int right = 0; right < nums.size(); ++right) {
            p += freq[nums[right]];
            freq[nums[right]]++;

            while (p >= k) {
                g += nums.size() - right;
                freq[nums[left]]--;
                p -= freq[nums[left]];
                left++;
            }
        }

        return g;
    }
};