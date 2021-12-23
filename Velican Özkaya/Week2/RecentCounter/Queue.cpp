#include "Queue.h"

Queue::Queue() {
    empty=true;
    head= nullptr;
    rear= nullptr;
    count=0;
}

queueNode *Queue::getHead() const {
    return head;
}

void Queue::setHead(queueNode *head) {
    Queue::head = head;
}

queueNode *Queue::getRear() const {
    return rear;
}

void Queue::setRear(queueNode *rear) {
    Queue::rear = rear;
}

bool Queue::isEmpty() const {
    return empty;
}

void Queue::setEmpty(bool empty) {
    Queue::empty = empty;
}

void Queue::push(queueNode *node) {
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

void Queue::pop() {
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

int Queue::getCount() const {
    return count;
}
