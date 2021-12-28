#include <iostream>
using namespace std;

class Node{
public:
    char value{};
    Node* nextNode{};
    Node(char i){
        value = i;
    }
};

class MyStack{
public:
    Node* topOfStack{};
    int size{};
    void push(char i){
        Node* newNode = new Node(i);
        if(size != 0){
            newNode->nextNode = topOfStack;
        }
        topOfStack = newNode;
        size++;
    }
    void pop(){
        Node* tmpNode = topOfStack;
        topOfStack = topOfStack->nextNode;
        delete tmpNode;
        size--;
    }
    char top(){
        return topOfStack->value;
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        MyStack toCheckOuter{};
        string outputString{};
        bool newTour{true};
        for (char &i: s) {
            if (newTour) {
                toCheckOuter.push(i);
                newTour = false;
            } else {
                if (i == ')' && toCheckOuter.top() == '(') {
                    if (toCheckOuter.size == 1) {
                        newTour = true;
                        toCheckOuter.pop();
                        continue;
                    } else {
                        toCheckOuter.pop();
                    }
                } else {
                    toCheckOuter.push(i);
                }
                outputString += string(1, i);
            }
        }
        return outputString;
    }
};
