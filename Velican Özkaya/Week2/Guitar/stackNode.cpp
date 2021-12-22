#include "stackNode.h"
stackNode::stackNode(int dat) {
    data=dat;
    next= nullptr;
    before= nullptr;
}

stackNode::~stackNode() {

}

int stackNode::getData() const {
    return data;
}

void stackNode::setData(int dat) {
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

void stackNode::setBefore(stackNode *befor) {
    stackNode::before = befor;
}