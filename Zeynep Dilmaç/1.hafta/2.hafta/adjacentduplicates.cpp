#include <iostream>
#include <string>
#include <vector>
#include "MyStack.cpp"
using namespace std;
void notduplicates(MyStack *s1,MyStack *s2);
int main() {
    string input;
    cin>>input;
    MyStack st1=MyStack();
    MyStack st2=MyStack();
    for(char c : input) {
        st1.push(c);
    }
    notduplicates(&st1,&st2);
    if(st2.isEmpty()){
        cout<<"";
    }else{
        while(!st2.isEmpty()){
            cout<<st2.pop();
        }
    }
    return 0;// abba    ac
}
void notduplicates(MyStack *s1,MyStack *s2){
    while(!s1->isEmpty()) {
        if(!s2->isEmpty() and s1->ftop()==s2->ftop()){
            s2->pop();s1->pop();
        }else{
            s2->push(s1->pop());
        }
    }
}