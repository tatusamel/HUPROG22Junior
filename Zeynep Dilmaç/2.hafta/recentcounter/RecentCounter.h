#ifndef UNTITLED4_RECENTCOUNTER_H
#define UNTITLED4_RECENTCOUNTER_H
#include "MyQueue.h"
class RecentCounter {
public:
    int count;
    MyQueue qu1;
    RecentCounter();
    int ping(int t);
};
#endif //UNTITLED4_RECENTCOUNTER_H