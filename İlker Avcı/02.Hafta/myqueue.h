#pragma once
#include <iostream>

class MyQueue {
 private:
  int m_front, m_rear, m_size;
  unsigned int m_capacity;
  int* m_array;

 public:
  MyQueue(unsigned int capacity) : m_capacity(capacity) {
    m_front = m_size = 0;
    m_rear = m_capacity - 1;
    m_array = new int[m_capacity];
  }
  int isFull() { return m_size == m_capacity; }

  int isEmpty() { return m_size == 0; }

  int size() { return m_size; }

  void enqueue(int item) {
    if (this->isFull())
      return;
    m_rear = (m_rear + 1) % m_capacity;
    m_array[m_rear] = item;
    m_size += 1;
    std::cout << item << " enqueued to the queue" << std::endl;
  }

  int dequeue() {
    if (this->isEmpty())
      return INT32_MIN;
    int item = m_array[m_front];
    m_front = (m_front + 1) % m_capacity;
    m_size -= 1;
    return item;
  }

  int front() {
    if (this->isEmpty())
      return INT32_MIN;
    return m_array[m_front];
  }

  int rear() {
    if (this->isEmpty())
      return INT32_MIN;
    return m_array[m_rear];
  }
};