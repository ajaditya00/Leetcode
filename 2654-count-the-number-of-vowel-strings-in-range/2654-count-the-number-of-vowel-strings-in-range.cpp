class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            char first = words[i].front();
            char last  = words[i].back();
            if (isVowel(first) && isVowel(last)) {
                count++;
            }
        }
        return count;
    }
};
