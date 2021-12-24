#define MAX_SIZE 10000
#include<iostream>
using namespace std;

template <typename T>
class Queue{

    public:

        Queue<T>(){};
        bool isEmpty(){ return Front == Rear; }
        bool isFull(){ return (Rear + 1) % MAX_SIZE == Front; }
        void push(T type){
            if(isFull()){ cout << "Overflow error! Pushing operation failed" << endl; }
            else{
                Rear = (Rear + 1) % MAX_SIZE;
                Front = Front == -1 ? 0 : Front;
                QUEUE[Rear] = type;
            }
        }
        T pop(){
            if(isEmpty()){ cout << "Underflow error! Popping operation failed" << endl; return T();}
            else{
                T t = QUEUE[Front];
                Front = (Front + 1) % MAX_SIZE;
                return t;
            }
        }
        T getFront(){
            if(! isEmpty()){ return QUEUE[Front];}
            return T();
        }
        int getSize(){
            if(Rear >= Front){ return Rear - Front + 1;}
            return MAX_SIZE - (Front - Rear) + 1;
        }
    private:
        T QUEUE[MAX_SIZE];
        int Front = -1;
        int Rear = -1;

};


class RecentCounter {
public:
    int total = 0;
    Queue<int> data;
    RecentCounter() {

    }

    int ping(int t) {
        data.push(t);
        while(true){
            if(data.isEmpty()){
                break;
            }

            if(data.getFront() >= t - 3000){
                break;
            }
            else{
                //total++;
                data.pop();
            }
        }

        return total + data.getSize();
    }
};
