#ifndef DUPLICATEDELETER_STACKNODE_H
#define DUPLICATEDELETER_STACKNODE_H


class stackNode {
private:
    char data;
    stackNode * next;
    stackNode * before;
public:
    stackNode();

    virtual ~stackNode();

    char getData() const;

    void setData(char data);

    stackNode *getNext() const;

    void setNext(stackNode *next);

    stackNode *getBefore() const;

    void setBefore(stackNode *before);
};


#endif //DUPLICATEDELETER_STACKNODE_H
