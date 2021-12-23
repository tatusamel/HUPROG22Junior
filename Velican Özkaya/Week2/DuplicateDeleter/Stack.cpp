#include "Stack.h"

Stack::Stack() {
    first = nullptr;
    last = nullptr;
    empty = true;
}

Stack::~Stack() {

}

stackNode *Stack::getFirst() const {
    return first;
}

void Stack::setFirst(stackNode *firs) {
    Stack::first = firs;
}

stackNode *Stack::getLast() const {
    return last;
}

void Stack::setLast(stackNode *las) {
    Stack::last = las;
}

bool Stack::isEmpty() const {
    return empty;
}
stackNode *Stack::peek() {
    if (isEmpty()) {
        return nullptr;
    }
    return last;
}
void Stack::push(stackNode *node) {
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
void Stack::pop() {
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
