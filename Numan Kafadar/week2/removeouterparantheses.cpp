class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;
        
        for (char curr : s)
            if ((curr == '(' && count++ > 0) || (curr == ')' && count-- > 1))
                result += curr;
        
        return result;
    }
};