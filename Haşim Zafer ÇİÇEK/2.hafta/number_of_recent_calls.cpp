class RecentCounter {
public:
    RecentCounter() {
        
        
    }
    int n = 10000;
    int queue[10000];
    int front = -1;
    int rear = -1;
    void enqueue(int t){
        if (rear == n-1){
            return;
        }
        else{
            if (front == -1){
                front = 0;
            }
            rear++;
            queue[rear] = t;
        }
    }
    
    int ping(int t) {
        int counter = 0;
        enqueue(t);
        for (int i=0;i<=rear;i++){
            if (queue[i] >= t-3000 && queue[i] <= t){
                counter++;
            }
        }
        return counter;
    }
};