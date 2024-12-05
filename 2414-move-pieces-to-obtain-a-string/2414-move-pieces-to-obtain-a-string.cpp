class Solution {
public:
    bool canChange(string start, string target) {
        if (start == target) {
            return true;
        }
        int L = 0;
        int R = 0;
        
        for (int i = 0; i < start.length(); i++) {
            char curr = start[i];
            char goal = target[i];
            if (curr == 'R') {
                if (L > 0) {
                    return false;
                }
                R++;
            }
            if (goal == 'L') {
                if (R > 0) {
                    return false;
                }
                L++;
            }
            if (goal == 'R') {
                if (R == 0) {
                    return false;
                }
                R--;
            }
            if (curr == 'L') {
                if (L == 0) {
                    return false;
                }
                L--;
            }
        }
        return L == 0 && R == 0;
    }
};