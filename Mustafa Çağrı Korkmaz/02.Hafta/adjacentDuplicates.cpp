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
    string removeDuplicates(string s) {
        MyStack myWordStack{};
        MyStack outputWordStack{};
        string outputWord{};
        for(char i : s){
            myWordStack.push(i);
        }
        while(myWordStack.size>0){
            if(outputWordStack.size>0 && outputWordStack.top() == myWordStack.top()){
                outputWordStack.pop();
            }else{
                outputWordStack.push(myWordStack.top());
            }
            myWordStack.pop();

        }
        while(outputWordStack.size>0){
            outputWord += outputWordStack.top();
            outputWordStack.pop();
        }
        return outputWord;
    }
};