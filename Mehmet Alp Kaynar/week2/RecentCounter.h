#define MAX_CALL 10001

class Stack{
public:
    int arr[MAX_CALL];
    int arr_size;
    const int top = -3000;
    Stack(){
        arr_size = -1;
    }

    void push(int ping_num){
        arr[++arr_size] = ping_num;

    }
};

class RecentCounter {
public:
    Stack *stack;
    RecentCounter() {
        stack = new Stack();
    }

    int ping(int t) {
        stack->push(t);
        int res = 0;
        for (int i = 0; i <= stack->arr_size; ++i) {
            if(stack->arr[i] >= (stack->top + t) && stack->arr[i] <= stack->arr[stack->arr_size]){
                res++;
            }
        }
        return res;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */