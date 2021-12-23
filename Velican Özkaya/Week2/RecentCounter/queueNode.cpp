#include "queueNode.h"

queueNode::queueNode(int dat){
    data=dat;
    next= nullptr;
}

int queueNode::getData() const {
    return data;
}

void queueNode::setData(int dat) {
    queueNode::data = dat;
}

queueNode *queueNode::getNext() const {
    return next;
}

void queueNode::setNext(queueNode *nex) {
    queueNode::next = nex;
}

queueNode::~queueNode() {

}
