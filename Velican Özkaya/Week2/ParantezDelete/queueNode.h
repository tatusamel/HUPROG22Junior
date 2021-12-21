//
// Created by velic on 21.12.2021.
//

#ifndef PARANTEZDELETE_QUEUENODE_H
#define PARANTEZDELETE_QUEUENODE_H

class queueNode {
private:
    char data;
    queueNode *next; // one before this node
public:
    queueNode(char data);
    queueNode *getNext() const;
    void setNext(queueNode *next);
    virtual ~queueNode();
    char getData() const;
    void setData(char dat);
};


#endif //PARANTEZDELETE_QUEUENODE_H
