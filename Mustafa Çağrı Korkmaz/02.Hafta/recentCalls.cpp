class Node{
public:
    int value{};
    Node* nextNode{nullptr};
    Node(int i){
        value = i;
    }
};


class MyQueue{
public:
    Node* front{nullptr};
    Node* rear{nullptr};
    int size{};
    void enQueue(int i){
        Node* tmpNode = new Node(i);
        if(rear == nullptr){
            front = rear = tmpNode;
            size++;
            return;
        }
        rear->nextNode = tmpNode;
        rear = tmpNode;
        size++;
    }
    void deQueue(){
        if (front == nullptr){
            return;
        }
        Node* tmpNode = front;
        front = front->nextNode;
        if(front == nullptr){
            rear = nullptr;
        }
        delete tmpNode;
        size--;
    }
    int frontValue(){
        return front->value;
    }

};


class RecentCounter {
public:
    MyQueue requests{};
    int rangeLeft{};
    int rangeRight{};
    RecentCounter() {

    }

    int ping(int t) {
        requests.enQueue(t);
        rangeLeft = t-3000;
        rangeRight = t;
        for(int i = 0; i<=requests.size;i++){
            if(rangeLeft<= requests.frontValue() &&requests.frontValue()<=rangeRight)
                break;
            else{
                requests.deQueue();
                i--;
            }
        }
        return requests.size ;
    }
};