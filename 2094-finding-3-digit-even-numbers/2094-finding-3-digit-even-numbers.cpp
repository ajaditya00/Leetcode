class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> m;
        unordered_map<int, int> ans;
        for (int ele : digits) {
            ans[ele]++;
        }
        for (int i = 100; i < 999; i += 2) {
            int x = i;
            int a = x % 10;
            x /= 10;
            int b = x % 10;
            x /= 10;
            int c = x;
            if (ans.find(a) !=
                ans.end()) { 
                ans[a]--;
                if (ans[a] == 0)
                    ans.erase(a);
                if (ans.find(b) != ans.end()) { 
                    ans[b]--;
                    if (ans[b] == 0)
                        ans.erase(b);
                    if (ans.find(c) != ans.end()) { 
                        m.push_back(i);
                    }
                    ans[b]++; 
                }
                ans[a]++; 
            }
        }
        return m;
    }
};