#include <iostream>
#include<bits/stdc++.h> // I don't know why but using this library allowed me to use less memory (24.12.2021 13.09)
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
            if(isEmpty()){ cout << "Underflow error! Popping operation failed" << endl; return T();}
            else{ return STACK[top--];}
        }
        T getTop(){
            if(! isEmpty()){ return STACK[top];}
            return T();
        }
    private:
        T STACK[MAX_SIZE];
        int top = -1;

};

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        Stack<char> paranthesis;
        char temp;
        for(int i = 0; i < s.size(); i++){
            temp = s.at(i);
            if(paranthesis.isEmpty()){
                paranthesis.push(temp);
            }

            else if(paranthesis.getTop() != temp){
                paranthesis.pop();
                if(! paranthesis.isEmpty()){
                    result.push_back(temp);
                }
            }
            else{
                paranthesis.push(temp);
                result.push_back(temp);
            }

        }
        return result;

    }
};


int main(){

    string str;
    cin >> str;
    string newStr = Solution().removeOuterParantheses(str);

    cout << newStr << endl;

    return 0;
}

