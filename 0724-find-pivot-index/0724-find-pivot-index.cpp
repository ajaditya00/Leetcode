class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;

        // Calculate left sum
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        // Calculate right sum
        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }

        if (leftSum == rightSum) {
            return i;
        }
    }
    return -1;
    }
};