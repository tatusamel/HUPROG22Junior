#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

#define MAX_SIZE 100000
template <typename T>
class Stack{

    public:

        Stack<T>(){};
        bool isEmpty(){ return top == -1; }
        bool isFull(){ return top == MAX_SIZE - 1; }
        void push(T type){
            if(isFull()){ cout << "Overflow error! Pushing operation failed" << endl; }
            else{ STACK[++top] = type;}
        }
        T pop(){
            if(isEmpty()){ cout << "Underflow error! Popping operation failed" << endl; }
            else{ return STACK[top--];}
        }
        T getTop(){
            if(! isEmpty()){ return STACK[top];}
        }
    private:
        T STACK[MAX_SIZE];
        int top = -1;

};

class Solution {
public:
    string removeDuplicates(string s) {
        string removed;
        Stack<char> chars;
        chars.push(s.at(0));

        for(int i = 1;i < s.length();i++){
            if(chars.isEmpty()){
                chars.push(s.at(i));
            }
            else{
                if(chars.getTop() == s.at(i)){ chars.pop();}
                else{   chars.push(s.at(i));    }
            }
        }
        while(! chars.isEmpty()){ removed.push_back(chars.pop()); }
        reverse(removed.begin(),removed.end());
        return removed;
    }
};


int main(){

    string str;
    cin >> str;
    string newStr = Solution().removeDuplicates(str);

    cout << newStr << endl;

    return 0;
}

