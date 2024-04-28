class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;
        char digit = 'A' + remainder;
        result += digit;
        cout<<result<<endl;
        columnNumber = (columnNumber - 1) / 26;
    }
    reverse(result.begin(),result.end());
    return result;
    }
};