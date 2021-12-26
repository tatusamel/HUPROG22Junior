class Solution {
public:
    string removeDuplicates(string s) {
    string stack="";
    for(auto&c:s)
        stack.size() && c==stack.back()?stack.pop_back():stack.push_back(c);
    return stack;
}
};