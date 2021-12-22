#ifndef PLAYGUITAR_STACK_H
#define PLAYGUITAR_STACK_H
#include "stackNode.h"

class stack {
private:
    stackNode *first;
    stackNode *last;
    bool empty;
public:
    stack();
    virtual ~stack();
    stackNode *getFirst() const;
    void setFirst(stackNode *first);
    stackNode *getLast() const;
    void setLast(stackNode *last);
    bool isEmpty() const;
    int  peek();
    void push(stackNode *node);
    void pop();
};


#endif //PLAYGUITAR_STACK_H
