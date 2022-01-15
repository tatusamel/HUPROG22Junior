#include "RecentCounter.h"
#include "MyQueue.cpp"
RecentCounter::RecentCounter() {
    count=0;
}
int RecentCounter::ping(int t) {
    int x=qu1.add(t);
    count=qu1.size();
    for(int i=0;i<qu1.size();i++){
        if(qu1.ftop()>=(x-3000)){
            break;
        }
        qu1.remove();
    }
    return count;
}