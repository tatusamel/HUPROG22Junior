//
// Created by velic on 21.12.2021.
//

#include "queueNode.h"

queueNode::queueNode(char dat){
    data=dat;
    next= nullptr;
}

queueNode *queueNode::getNext() const {
    return next;
}

void queueNode::setNext(queueNode *nex) {
    queueNode::next = nex;
}

queueNode::~queueNode() {

}

char queueNode::getData() const {
    return data;
}

void queueNode::setData(char dat) {
    queueNode::data = dat;
}
