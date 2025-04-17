class Solution {
public:
    int countPairsRecursive(vector<int>& nums, int k, int i, int j) {
        int n = nums.size();
        if (i >= n - 1) return 0;
        if (j >= n) return countPairsRecursive(nums, k, i + 1, i + 2);

        int count = 0;
        if (nums[i] == nums[j] && (i * j) % k == 0) {
            count = 1;
        }

        return count + countPairsRecursive(nums, k, i, j + 1);
    }

    int countPairs(vector<int>& nums, int k) {
        return countPairsRecursive(nums, k, 0, 1);
    }
};
