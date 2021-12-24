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
        //Node* temp = root;
        root = root->next;
        //free(temp);

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

};
class Solution {
public:
    Stack stack;
    string removeDuplicates(string s) {
        for(int i = 0;i<s.length();i++){
            if(s.at(i) == stack.top()){
                stack.pop();
                continue;
            }
            else{
                stack.push(s.at(i));
            }
        }
        string r = "";
        Node* iter = stack.getRoot();
        while(iter!=nullptr){
            r+=iter->data;
            iter=iter->next;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};