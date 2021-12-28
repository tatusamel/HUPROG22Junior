#pragma once
#include <iostream>

class StackNode {
 public:
  int data = 0;
  StackNode* next;
};

StackNode* newNode(int data) {
  StackNode* node = new StackNode();
  node->data = data;
  node->next = NULL;
  return node;
}

int isEmpty(StackNode* root) {
  return !root;
}

void push(StackNode** root, int data) {
  auto node = newNode(data);
  if (!isEmpty(*root))
    node->next = *root;
  *root = node;
}

int pop(StackNode** root) {
  if (isEmpty(*root))
    return INT32_MIN;
  auto temp = *root;
  *root = (*root)->next;
  int popped = temp->data;
  free(temp);
  return popped;
}

int peek(StackNode* root) {
  if (isEmpty(root))
    return INT32_MIN;
  return root->data;
}