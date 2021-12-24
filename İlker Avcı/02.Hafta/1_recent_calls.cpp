#include <iostream>

#include "myqueue.h"

class RecentCounter {
  MyQueue* q;

 public:
  RecentCounter() : q(new MyQueue(10001)) {}

  int ping(int t) {
    // Add the new ping to the queue
    q->enqueue(t);

    // Remove all elements which are older than [the last ping - 3000 ms]
    // or equally, t-3000
    while (q->front() < t - 3000)
      q->dequeue();

    // All the remaining elements are at most 3000ms older than the last ping
    return q->size();
  }
};

int main() {
  int t;

  auto obj = new RecentCounter();
  int param_1 = obj->ping(t);
}
