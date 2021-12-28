class Stack{
public:
    char stack_arr[100000];
    int top;
    // constructor
    Stack(){
        top = -1;
    }

    void push(char c1){
        stack_arr[++top] = c1;
    }
    
    int pop() {
        int x = stack_arr[top--];
        return x;
    }
};

class Solution {
public:
    string removeDuplicates(string S) {
        Stack* s = new Stack();
        for(int i = 0; i < S.size(); i++){
            if(s->top >= 0 && s->stack_arr[s->top] == S[i]){
                s->pop();
            }else{
                s->push(S[i]);
            }
        }
        
        string res;
        
        while(s->top >= 0){
            res += s->stack_arr[s->top];
            s->pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};