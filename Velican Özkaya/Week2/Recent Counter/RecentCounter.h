#ifndef HUPROGHAFTA2_RECENTCOUNTER_H
#define HUPROGHAFTA2_RECENTCOUNTER_H
#include "queue.h"

class RecentCounter {
private:
    queue list;
public:
    RecentCounter();
    int ping(int t);
};


#endif //HUPROGHAFTA2_RECENTCOUNTER_H
