#include <iostream>
#include <vector>
using namespace std;
int MyQueue::add(int t) {
    a.push_back(t);
    return t;
}
void MyQueue::remove() {
    if(a.size()!=0){
        a.erase(a.begin());
    }else{
        return;
    }
}
int MyQueue::ftop(){
    if(a.size()!=0){
        return a[0];
    }else{
        return -1;
    }
}
int MyQueue::size() {
    return a.size();
}