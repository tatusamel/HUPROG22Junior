#include "stackNode.h"

stackNode::stackNode() {
    data=' ';
    next= nullptr;
    before= nullptr;
}

stackNode::~stackNode() {

}

char stackNode::getData() const {
    return data;
}

void stackNode::setData(char dat) {
    stackNode::data = dat;
}

stackNode *stackNode::getNext() const {
    return next;
}

void stackNode::setNext(stackNode *nex) {
    stackNode::next = nex;
}

stackNode *stackNode::getBefore() const {
    return before;
}

void stackNode::setBefore(stackNode *before) {
    stackNode::before = before;
}
