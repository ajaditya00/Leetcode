class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for (char ele : s) {
            mp[ele]++;
        }

        int even = INT_MAX, odd = INT_MIN;
        for (auto x : mp) {
            int freq = x.second;

            if (freq % 2 == 1) {
                odd = max(odd, freq);
            } else {
                even = min(even, freq);
            }
            
        }
        return odd-even;
    }
};
