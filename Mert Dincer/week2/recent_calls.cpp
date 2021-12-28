class Stack{
public:
    int stack_arr[10023];
    int curr_size;
    // constructor
    Stack(){
        curr_size= -1;
    }

    void push(int ping){
        stack_arr[++curr_size] = ping;
    }
};
class RecentCounter {
public:
    Stack* stack;
    RecentCounter() {
        stack = new Stack();
    }
    
    int ping(int t) {
        int result = 0;
        stack->push(t);
        for (int i = 0; i <= stack->curr_size; ++i) {
            if((stack->stack_arr[i] >= (t - 3000)) && (stack->stack_arr[i] <= stack->stack_arr[stack->curr_size])){
                result++;
            }
        }
        return result;
    }
};