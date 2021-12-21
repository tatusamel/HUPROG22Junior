#include "Solution.h"
string Solution::removeDuplicates(string s) {
    string output="";
    stack myStack;
    int counter=0;
    for(int i=0;i<s.size();i++) {
        stackNode *nodeptr = new stackNode();
        nodeptr->setData(s[i]);
        if (myStack.isEmpty()) {
            myStack.push(nodeptr);
            counter++;
        } else if (pthread_equal(myStack.peek()->getData(), nodeptr->getData())) {
            myStack.pop();
            counter--;
        } else {
            myStack.push(nodeptr);
            counter++;
        }
    }
    stackNode *nodeptr= myStack.getFirst();
    for(int i=0;i<counter;i++){
        output+=nodeptr->getData();
        nodeptr=nodeptr->getBefore();
    }
    return output;
}
