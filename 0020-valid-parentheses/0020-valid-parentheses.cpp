class Solution{ 
public:
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isValid(const string& expr) {
    stack<char> stk;
    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stk.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (stk.empty() || !isMatchingPair(stk.top(), ch)) {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty() ? true : false;
}
};
