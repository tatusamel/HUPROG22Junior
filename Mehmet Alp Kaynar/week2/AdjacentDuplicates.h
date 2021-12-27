#define MAX_CALL 100001
#include <string>

using namespace std;

class Stack{
public:
    char arr[MAX_CALL];
    int arr_size;
    Stack(){
        arr_size = -1;
    }

    void push(char ping_num){
        arr[++arr_size] = ping_num;
    }

    void pop(){
        arr_size--;
    }

    char top(){
        return arr[arr_size];
    }

    bool empty(){
        return arr_size == -1;
    }
};

class Solution {
public:
    Stack *stack = new Stack();
    string removeDuplicates(string s) {
        for(int i=0 ;i<s.size();i++){
            if(stack->empty() || stack->top() != s[i]){
                stack->push(s[i]);
            }
            else
                stack->pop();
        }

        string old_res="";
        while(!stack->empty()){
            old_res+=stack->top();
            stack->pop();
        }

        string new_res = "";
        for (int i = old_res.size()-1; i >=0; i--) {
            new_res+= old_res.substr(i,1);
        }
        return new_res;
    }
};