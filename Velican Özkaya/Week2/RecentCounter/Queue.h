#ifndef RECENTCOUNTER_QUEUE_H
#define RECENTCOUNTER_QUEUE_H
#include "queueNode.h"

class Queue {
private:
    queueNode *head;
    queueNode *rear;
    bool empty;
    int count;
public:
    Queue();
    queueNode *getHead() const;
    void setHead(queueNode *head);
    queueNode *getRear() const;
    void setRear(queueNode *rear);
    bool isEmpty() const;
    void setEmpty(bool empty);
    void push(queueNode *node);
    void pop();
    int getCount() const;
};


#endif //RECENTCOUNTER_QUEUE_H
