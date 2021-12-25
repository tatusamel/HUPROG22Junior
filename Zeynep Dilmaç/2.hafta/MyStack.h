#ifndef UNTITLED2_MYSTACK_H
#define UNTITLED2_MYSTACK_H
class MyStack {
    int top;
public:
    int a[100];
    char b[100];
    MyStack() { top = -1; }
    bool push(char x);
    char pop();
    char ftop();
    bool isEmpty();
};
#endif //UNTITLED2_MYSTACK_H