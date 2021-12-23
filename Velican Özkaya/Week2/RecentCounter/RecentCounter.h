#ifndef RECENTCOUNTER_RECENTCOUNTER_H
#define RECENTCOUNTER_RECENTCOUNTER_H
#include "Queue.h"

class RecentCounter {
private:
    Queue list;
public:
    RecentCounter();
    int ping(int t);
};


#endif //RECENTCOUNTER_RECENTCOUNTER_H
