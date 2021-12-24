using namespace std;
class Node{
public:
    int data;
    Node* next = nullptr;
    Node(int s){
        data = s;
    }
};

class Stack{
private:
    Node* root = nullptr;
public:
    void push(int s) {
        if(root == nullptr){
            root = new Node(s);
            return;
        }
        Node* temp = new Node(s);
        temp->next = root;
        root = temp;
    }
    Node* getRoot(){
        return root;
    }
};

class RecentCounter {
public:
    int counter;
    Stack stack;
    RecentCounter() {
        counter = 0;
    }

    int ping(int t) {
        counter = 0;
        stack.push(t);
        Node* iter = stack.getRoot();
        while(iter!=nullptr){
            if(iter->data<=t && iter->data>=t-3000){
                counter++;
            }
            iter = iter->next;
        }
        return counter;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */