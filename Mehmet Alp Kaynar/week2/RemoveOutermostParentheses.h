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
        if (arr_size < -1){
            arr_size = -1;
        }
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
    string removeOuterParentheses(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '('){
                stack->push(s[i]);
                if (stack->arr_size > 0){
                    result += s.substr(i,1);
                }
            }
            else{
                stack->pop();
                if (stack->arr_size > -1){
                    result += s.substr(i,1);
                }
            }
        }
        return result;
    }
};