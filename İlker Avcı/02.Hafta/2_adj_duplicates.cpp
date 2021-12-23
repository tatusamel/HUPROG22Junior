#include <iostream>
#include <string>
#include "mystack.h"
using namespace std;

class Solution {
 public:
  string removeDuplicates(string s) {
    auto stack = new MyStack();
    for (int i = s.length(); i >= 0; i--) {
      char c = s[i];
      if (stack->isEmpty())
        stack->push(c);
      else {
        if (stack->peek() == c)
          stack->pop();
        else
          stack->push(c);
      }
    }
    string result = "";
    while (!stack->isEmpty()) {
      result += (char)stack->pop();
    }

    return result;
  }
};

int main() {
  string str = "abbaca";

  Solution* s = new Solution();
  cout << '"' << s->removeDuplicates(str) << '"' << endl;
}