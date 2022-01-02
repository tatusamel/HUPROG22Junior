class Stack {
    char *arr;
    int top;

public:
    
    Stack(unsigned int capacity){
        arr = new char[capacity];
        top = -1;
    }
    
    string stackToString(){
        string str;
        for (int i = 0; i < top+1; i++){
            str+= arr[i];
        }
        top = -1;
        return str;
    }
    
    void push(char s){
        arr[++top] = s;
    }
    
    char pop(){
        return arr[top--];
    }
    
    char peek(){
        return arr[top];
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
};

class Solution {
    int len;

public:
    string removeDuplicates(string s) {
        
        len = s.length();
        Stack stack(len);
        
        int i = 0;
        while (i < len)
        {
            if (!stack.isEmpty() and s[i] == stack.peek())
            {
                stack.pop();   
            }
            else
            {
                stack.push(s[i]);
            }
            i++;
        }
        
        return stack.stackToString();
    }
};