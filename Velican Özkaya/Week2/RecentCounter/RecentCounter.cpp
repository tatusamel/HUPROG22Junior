#include "RecentCounter.h"

RecentCounter::RecentCounter() {
    list=Queue();
}

int RecentCounter::ping(int t) {
    queueNode *node = new queueNode(t);
    list.push(node);
    while(true){
        if(t-list.getHead()->getData()<=3000){
            break;
        }
        list.pop();
    }
    return list.getCount();
}
