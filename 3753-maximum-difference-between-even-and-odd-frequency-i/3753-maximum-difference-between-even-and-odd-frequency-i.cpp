class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for (char ele : s) {
            mp[ele]++;
        }

        int even = 0, odd = 0;
        for (auto x : mp) {
            int freq = x.second;
            if (freq % 2 == 0) {
                even = max(even, freq);
            } else {
                odd = max(odd, freq);
            }
        }
        int ans=odd-even;

        return (ans>-1)?ans:-1;
    }
};
