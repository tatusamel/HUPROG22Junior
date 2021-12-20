#include "queue.h"

queue::queue() {
    empty=true;
    head= nullptr;
    rear= nullptr;
    count=0;
}

queueNode *queue::getHead() const {
    return head;
}

void queue::setHead(queueNode *head) {
    queue::head = head;
}

queueNode *queue::getRear() const {
    return rear;
}

void queue::setRear(queueNode *rear) {
    queue::rear = rear;
}

bool queue::isEmpty() const {
    return empty;
}

void queue::setEmpty(bool empty) {
    queue::empty = empty;
}

void queue::push(queueNode *node) {
    count++;
    if(isEmpty()){
        head=node;
        rear=node;
        empty=false;
        return;
    }
    rear->setNext(node);
    rear=node;
}

void queue::pop() {
    if(isEmpty()){
        return;
    }
    count--;
    if(head->getNext()== nullptr){
        delete head;
        head= nullptr;
        rear= nullptr;
        empty=true;
        return;
    }
    queueNode *holder=head->getNext();
    delete head;
    head=holder;
}

int queue::getCount() const {
    return count;
}
