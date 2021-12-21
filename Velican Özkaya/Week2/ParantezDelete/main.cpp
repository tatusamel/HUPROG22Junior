#include <iostream>
#include "Solution.h"
int main() {
    cout << "Hello, World!" << endl;
    string deneme="((())(()))(()())";
    cout<<deneme<<endl;
    deneme = Solution::removeOuterParentheses(deneme);
    cout<<deneme<<endl;
    return 0;
}
