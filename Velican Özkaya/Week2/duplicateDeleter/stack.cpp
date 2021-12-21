#include "stack.h"

stack::stack() {
    first = nullptr;
    last = nullptr;
    empty = true;
}

stack::~stack() {

}

stackNode *stack::getFirst() const {
    return first;
}

void stack::setFirst(stackNode *firs) {
    stack::first = firs;
}

stackNode *stack::getLast() const {
    return last;
}

void stack::setLast(stackNode *las) {
    stack::last = las;
}

bool stack::isEmpty() const {
    return empty;
}
stackNode *stack::peek() {
    if (isEmpty()) {
        return nullptr;
    }
    return last;
}
void stack::push(stackNode *node) {
    if(isEmpty()){
        first=node;
        last=node;
        empty=false;
        return;
    }
    last->setBefore(node);
    node->setNext(last);
    last=node;
}
void stack::pop() {
    if(last->getNext()== nullptr){
        delete last;
        first= nullptr;
        last= nullptr;
        empty=true;
        return;
    }
    stackNode *holder=last->getNext();
    holder->setBefore(nullptr);
    delete last;
    last=holder;
}
