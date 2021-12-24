#include <iostream>
#include <string>
#include "mystack.h"
using namespace std;

class Solution {
 public:
  string removeOuterParentheses(string s) {
    MyStack stack;
    string result;
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      // Stack only stores the opening parantheses
      if (c == '(') {
        // If there's already another opening paranthesis in the stack,
        // add this opening paranthesis into the answer
        if (!stack.isEmpty())
          result += c;

        // Add this opening paranthesis to the stack
        stack.push(c);
      } else {  // c == ')'
        // If there's more than one opening parantheses beforehand,
        // add this closing paranthesis to the answer.
        // If there's less than or equal to 1 parantheses in the stack,
        // that means the previous opening paranthesis was not an outer one.
        if (stack.size() > 1)
          result += c;

        // We found a closing paranthesis so another couple of parantheses were
        // made Hence we can remove one of the opening paratheses from the stack
        stack.pop();
      }
    }
    return result;
  }
};

int main() {
  // Just a sample for testing
  string s = "(()())(())";

  auto obj = new Solution();
  cout << obj->removeOuterParentheses(s) << endl;
}