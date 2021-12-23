#include <iostream>

#include "myqueue.h"

class RecentCounter {
  MyQueue* q;

 public:
  RecentCounter() : q(new MyQueue(10001)) {}

  int ping(int t) {
    q->enqueue(t);
    while (q->front() < t - 3000)
      q->dequeue();
    return q->size();
  }
};

int main() {
  int t;

  auto obj = new RecentCounter();
  int param_1 = obj->ping(t);
}
