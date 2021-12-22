#ifndef PLAYGUITAR_STACKNODE_H
#define PLAYGUITAR_STACKNODE_H

class stackNode {
private:
    int data;
    stackNode * next;
    stackNode * before;
public:
    stackNode(int dat);

    virtual ~stackNode();

    int getData() const;

    void setData(int data);

    stackNode *getNext() const;

    void setNext(stackNode *nex);

    stackNode *getBefore() const;

    void setBefore(stackNode *befor);
};


#endif //PLAYGUITAR_STACKNODE_H
