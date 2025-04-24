class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int t = st.size(), count = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            unordered_set<int> seen;
            for (int j = i; j < n; j++) {
                seen.insert(nums[j]);
                if (seen.size() == t) {
                    count += n - j;
                    break;
                }
            }
        }

        return count;
    }
};