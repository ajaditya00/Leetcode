class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = 0, count = 0;
        for (int num : nums) {
            if (count == 0) {
                n = num;
            }
            count += (num == n) ? 1 : -1;
        }
        return n;
    }
};
