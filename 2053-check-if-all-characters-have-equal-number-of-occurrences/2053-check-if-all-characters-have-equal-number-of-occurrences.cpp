class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        int freq = -1;
        for (auto& id : mp) {
            if (freq == -1) {
                freq = id.second; 
            } else if (id.second != freq) {
                return false; 
            }
        }
        return true; 
    }
};