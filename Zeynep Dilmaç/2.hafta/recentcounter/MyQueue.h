#ifndef UNTITLED4_MYQUEUE_H
#define UNTITLED4_MYQUEUE_H
#include <vector>
using namespace std;
class MyQueue {
    int top;
public:
    vector<int> a;
    int add(int t);
    void remove();
    int ftop();
    int size();
};
#endif //UNTITLED4_MYQUEUE_H