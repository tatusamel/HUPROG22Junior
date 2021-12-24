class Node{
public:
    char data;
    Node* next = nullptr;
    Node(char s){
        data = s;
    }
};

class Stack{
private:
    Node* root = nullptr;
public:
    void push(char s) {
        if(root == nullptr){
            root = new Node(s);
            return;
        }
        Node* temp = new Node(s);
        temp->next = root;
        root = temp;
    }
    void pop(){
        if(root == nullptr){
            return;
        }
        root = root->next;
    }
    char top(){
        if(root == nullptr){
            return ' ';
        }
        return root->data;
    }
    Node* getRoot( ){
        return root;
    }
    bool isEmpty(){
        if(root == nullptr){
            return true;
        }
        else{
            return false;
        }
    }

};
class Solution {
public:
    string removeOuterParentheses(string s) {
        int p1 = 0;
        int p2 = 0;
        Stack stack;
        Stack stack2;
        vector<char> vec;
        string r = "";
        for(int i = 0;i<s.length();i++){
            if(stack.isEmpty()){
                stack.push(s.at(i));
                continue;
            }
            else{
                if(p1==0 && s.at(i) == ')'){
                    stack.pop();
                    stack.pop();
                    continue;
                }
                stack.push(s.at(i));
                if(s.at(i) == '('){
                    p1++;
                }
                if(s.at(i) == ')'){
                    p2++;
                }
                if(p1 == p2) {
                    for(int j=0;j<p1+p2;j++){
                        stack2.push(stack.top());
                        stack.pop();
                    }
                    for(int j=0;j<p1+p2;j++){
                        vec.push_back(stack2.top());
                        stack2.pop();
                    }
                    p1=0;
                    p2=0;
                }
            }
        }
        for(int i = 0;i<vec.size();i++){
            r+=vec.at(i);
        }

        return r;
    }
};