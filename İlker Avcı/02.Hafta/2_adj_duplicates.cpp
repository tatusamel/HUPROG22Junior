#include <iostream>
#include <string>
#include "mystack.h"
using namespace std;

class Solution {
 public:
  string removeDuplicates(string s) {
    auto stack = new MyStack();
    // Looping through the string in reverse because the stack will be holding
    // the answer and stack is a LIFO structure. I could've just reversed the
    // answer string but I am too lazy for that
    for (int i = s.length(); i >= 0; i--) {
      char c = s[i];

      // There can't be duplicates if the stack is empty
      if (stack->isEmpty())
        stack->push(c);
      else {  // stack is not empty

        // If the current letter is the same as the latest element of the stack,
        // they would destroy each other, resulting in not adding the current
        // letter to the stack and also removing the last element of the stack.
        if (stack->peek() == c)
          stack->pop();

        // If the current letter is different than the latest element in stack
        // the current letter can be safely added to the stack
        else
          stack->push(c);
      }
    }

    // Pouring all the elements in the stack into a string
    string result = "";
    while (!stack->isEmpty()) {
      result += (char)stack->pop();
    }

    return result;
  }
};

int main() {
  // Just a sample for testing
  string str = "abbaca";

  Solution* s = new Solution();
  cout << '"' << s->removeDuplicates(str) << '"' << endl;
}