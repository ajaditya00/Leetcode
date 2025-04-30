class Solution {
public:
    int check(int n) {
        int digits = 0;
        while (n > 0) {
            n /= 10;
            digits++;
        }
        return digits;
    }

    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (check(nums[i]) % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};
