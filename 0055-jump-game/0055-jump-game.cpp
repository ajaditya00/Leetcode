class Solution {
public:
    bool canJump(vector<int>& nums) {
         if (nums.size() < 2) {
            return true;
        }
        int n = nums.size() - 1;
        for (int i = n; i >= 0; i--) {
            if (i + nums[i] >= n) {
                n = i;
            }
        }
        return n == 0;

    }
};