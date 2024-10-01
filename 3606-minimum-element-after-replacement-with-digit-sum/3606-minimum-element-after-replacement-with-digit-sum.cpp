class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum = INT_MAX;
        int n=nums.size();
        for (int i = 0; i <n; i++) {
            int s = 0;
            while (nums[i]) {
                int rem = nums[i]%10;
                s += rem;
                nums[i] /= 10;
            }
            nums[i] = s;
            sum = min(nums[i],sum);
        }
        return sum;
    }
};