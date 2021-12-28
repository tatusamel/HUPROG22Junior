class Stack{
public:
    char stack_arr[10023];
    int top;
    // constructor
    Stack(){
        top = -1;
    }

    void push(char c1){
        stack_arr[++top] = c1;
    }
};

class Solution {
public:
    string removeOuterParentheses(string str1) {
        Stack myCharStack[str1.length()];
        string str2;
        
        for(int i = 0; str1[i]; i++){
            if(str1[i] == '('){
                myCharStack->push(str1[i]);
                if(myCharStack->top > 0) str2 += myCharStack->stack_arr[myCharStack->top];
            }
            else if(str1[i] == ')'){
                if(myCharStack->top != 0) str2 += str1[i];
                myCharStack->top--;
            }
        }
        return str2;
    }
};