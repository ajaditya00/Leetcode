class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<long, vector<long>, greater<long>> mp(nums.begin(), nums.end());
        int cnt = 0;

        while (mp.size() > 1 && mp.top() < k) {
            long long s1 = mp.top();
            mp.pop();
            long long s2 = mp.top();
            mp.pop();
            long long newVal = ((s1 * 2 )+ s2);
            mp.push(newVal);
            cnt++;
        }

        return cnt;
    }
};
