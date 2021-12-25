#include "MyStack.h"
#include <iostream>
using namespace std;
bool MyStack::push(char x) {
    if(top >=(100 -1)){
        cout<<"Stack overflow"<<endl;
        return false;
    }else{
        a[++top]=x;
        return true;
    }
}
char MyStack::pop() {
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return 0;
    }else{
        char x=a[top--];
        return x;
    }
}
bool MyStack::isEmpty() {
    if(top<0){
        return true;
    }
    return false;
}
char MyStack::ftop(){
    if (top < 0) {
        cout << "Stack is Empty"<<endl;
        return 0;
    }else {
        char x = a[top];
        return x;
    }
}