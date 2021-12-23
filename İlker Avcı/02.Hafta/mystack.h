#pragma once
#define MAX 100000
#include <iostream>
using namespace std;

class MyStack {
 private:
  int top;

 public:
  int a[MAX];

  bool push(int x) {
    if (top >= MAX - 1) {
      cout << "Stack overflow" << endl;
      return false;
    } else {
      a[++top] = x;
      return true;
    }
  }

  int pop() {
    if (top < 0) {
      cout << "Stack overflow" << endl;
      return 0;
    } else {
      int x = a[top--];
      return x;
    }
  }

  int peek() {
    if (top < 0) {
      cout << "Stack is empty" << endl;
      return 0;
    } else {
      int x = a[top];
      return x;
    }
  }

  bool isEmpty() { return top < 0; }
};