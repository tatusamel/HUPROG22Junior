// this solution didn't 17 testcases from 106 testcases because of the time limit exceed.
using namespace std;
struct stack_ll{
    char c;
    stack_ll* next;
};
typedef stack_ll node;
node* newStack(node* s,char c){
    s = (node*) malloc(sizeof(node));
    s->c = c;
    s->next = nullptr;
    return s;
}
void push(node* s,char c){
    while (s->next != nullptr){
            s = s->next;
        }
        node * new_stack = (node*) malloc(sizeof(node));
        new_stack->c = c;
        new_stack->next = nullptr;
        s->next = new_stack;
}
node* pop(node*s){
    if(s == nullptr){
        return nullptr;
    }
    else if (s->next == nullptr){
        return nullptr;
    }
    else{
        node * root = s;
        while (s->next->next != nullptr){
            s = s->next;
        }
        s->next = nullptr;
        return root;
    }
}
char top(node* s){
    while(s->next!=nullptr){
        s = s->next;
    }
    return s->c;
}
class Solution {
public:
    string removeDuplicates(string s) {
        node* stack = nullptr;
        for (int i =0;i < s.length();i++){
            if(stack != nullptr && top(stack) != s[i]){
                push(stack,s[i]);
            }
            else if(stack == nullptr){
                stack = newStack(stack,s[i]);
            }
            else{
                stack = pop(stack);
            }
        }
        string output = "";
        while(stack != nullptr){
            output += stack->c;
            stack = stack->next;
        }
        return output;
    }
};