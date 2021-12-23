#include "Solution.h"

string Solution::removeOuterParentheses(string s) {
    string output = "";
    int depth = 0;
    Queue myQueue;
    for (int i = 0; i < s.size(); i++) {
        if (pthread_equal(s[i], '(')) {
            depth++;
            queueNode *node = new queueNode('(');
            myQueue.push(node);
        }
        else {
            depth--;
            if (depth == 0) {
                myQueue.pop();
                int count = myQueue.getCount();
                for (int j = 0; j < count; j++) {
                    output += myQueue.getHead()->getData();
                    myQueue.pop();
                }
            }
            else {
                queueNode *node = new queueNode(')');
                myQueue.push(node);
            }
        }
    }
    return output;
}
