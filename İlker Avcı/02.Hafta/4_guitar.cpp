#include <iostream>
#include "myllstack.h"

class Solution {
 public:
  int guitar() {
    int n, p, counter = 0;
    std::cin >> n >> p;

    // Here we have a stack for each guitar string, which will
    // hold the pressed fret values
    StackNode** stacks = new StackNode*[6];

    for (int i = 0; i < n; i++) {
      int str, fret;
      std::cin >> str >> fret;
      StackNode** stack = &(stacks[str]);

      // If no frets are pressed on string str, this would make
      // one move
      if (isEmpty(*stack)) {
        push(stack, fret);
        counter++;
      } else {
        // There's at least one fret pressed in this string.
        // Release all the frets which are smaller than the
        // currently pressed fret. Each release would make one move
        while (peek(*stack) > fret) {
          pop(stack);
          counter++;
        }

        // If the current fret is already pressed, there's nothing
        // to do. Just skip this query.
        if (peek(*stack) == fret)
          continue;

        // Add the newly pressed fret to the stack, which makes one move
        push(stack, fret);
        counter++;
      }
    }
    return counter;
  }
};

int main() {
  auto s = new Solution();
  std::cout << s->guitar() << std::endl;
}