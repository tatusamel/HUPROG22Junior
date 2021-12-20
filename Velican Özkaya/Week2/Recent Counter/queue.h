//
// Created by velic on 20.12.2021.
//

#ifndef HUPROGHAFTA2_QUEUE_H
#define HUPROGHAFTA2_QUEUE_H
#include "queueNode.h"

class queue {
private:
    queueNode *head;
    queueNode *rear;
    bool empty;
    int count;
public:
    queue();
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


#endif //HUPROGHAFTA2_QUEUE_H
