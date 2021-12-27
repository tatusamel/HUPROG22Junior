#include <iostream>
//#include "RecentCounter.h"
//#include "AdjacentDuplicates.h"
//#include "RemoveOutermostParentheses.h"

using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedLists{
public:
    Node *all_list[6];

    LinkedLists(){
        for (int i = 0; i < 6; ++i) {
            all_list[i] = nullptr;
        }
    }

    void push(int key, int data){
        if (all_list[key - 1] == nullptr){
            Node *new_node = new Node(data);
            all_list[key-1] = new_node;
        }
        else{
            Node *ptr = new Node(data);
            ptr->next = all_list[key-1];
            all_list[key-1] = ptr;
        }
    }

    void delNode(int key){
        if (all_list[key-1] != nullptr){
            all_list[key-1] = all_list[key-1]->next;
        }
    }

    int lastEle(int key){
        if (isEmpty(key)){
            return 0;
        }
        return all_list[key-1]->data;
    }

    bool isEmpty(int key){
        return all_list[key-1] == nullptr;
    }

    int Movements(int key, int value){
        int count = 0;
        while (lastEle(key) > value){
            delNode(key);
            count++;
        }
        return count;
    }
};

int main(){
    LinkedLists *guitar_list = new LinkedLists();
    int size, bos, melody, fret, count_mov = 0;
    cin >> size >> bos;
    for (int i = 0; i < size; i++) {
        cin >> melody >> fret;
        if (guitar_list->isEmpty(melody) || guitar_list->lastEle(melody) < fret){
            guitar_list->push(melody,fret);
            count_mov++;
        }
        else if (guitar_list->lastEle(melody) > fret){
            count_mov+= guitar_list->Movements(melody,fret);
            if (guitar_list->lastEle(melody) != fret){
                guitar_list->push(melody,fret);
                count_mov++;
            }
        }
    }
    cout << count_mov;


    return 0;
}
