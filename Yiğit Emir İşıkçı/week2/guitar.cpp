#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int fret;
    Node* next = nullptr;
    Node(int fret){
        this->fret = fret;
    }
};

class LinkedList{ //linked list yapisinda stack
public:
    //o(1) de ekliyor
    void ekle(int x) {
        if(root == nullptr){
            root = new Node(x);
            return;
        }
        Node* temp = new Node(x);
        temp->next = root;
        root = temp;
    }
    // o(1) de siliyor
    void sil(){
        if(root == nullptr){
            return;
        }
        root = root->next;
    }
    // o(1)
    int top(){
        return root->fret;
    }
    // o(1)
    Node* getRoot(){
        return root;
    }
    // o(1)
    bool isEmpty(){
        if(root == nullptr){
            return true;
        }
        else{return false;}
    }
private:
    Node* root = nullptr;
};
int main() {
    int n,fMax;
    cin>>n>>fMax;
    //tum teller icin LL
    LinkedList tel1;
    LinkedList tel2;
    LinkedList tel3;
    LinkedList tel4;
    LinkedList tel5;
    LinkedList tel6;

    int c = 0;


    for(int i=0;i<n;i++){
        int tel, fret;
        cin>>tel>>fret;

        if(tel ==1){
            if(tel1.isEmpty()){
                tel1.ekle(fret);
                c++;
                continue;
            }
            if(tel1.top()>fret){
                while(!tel1.isEmpty() && tel1.top()>fret){
                    tel1.sil();
                    c++;
                }
                if(tel1.isEmpty()){
                    tel1.ekle(fret);
                    c++;
                }
                if(!tel1.isEmpty() && tel1.top() != fret){
                    tel1.ekle(fret);
                    c++;
                }
                continue;
            }
            if(tel1.top()<fret){
                tel1.ekle(fret);
                c++;
                continue;
            }
            continue;
        }
        if(tel ==2){
            if(tel2.isEmpty()){
                tel2.ekle(fret);
                c++;
                continue;
            }
            if(tel2.top()>fret){
                while(!tel2.isEmpty() && tel2.top()>fret){
                    tel2.sil();
                    c++;
                }
                if(tel2.isEmpty()){
                    tel2.ekle(fret);
                    c++;
                }
                if(!tel2.isEmpty() && tel2.top() != fret){
                    tel2.ekle(fret);
                    c++;
                }
                continue;
            }
            if(tel2.top()<fret){
                tel2.ekle(fret);
                c++;
                continue;
            }
            continue;
        }
        if(tel ==3){
            if(tel3.isEmpty()){
                tel3.ekle(fret);
                c++;
                continue;
            }
            if(tel3.top()>fret){
                while(!tel3.isEmpty() && tel3.top()>fret){
                    tel3.sil();
                    c++;
                }
                if(tel3.isEmpty()){
                    tel3.ekle(fret);
                    c++;
                }
                if(!tel3.isEmpty() && tel3.top() != fret){
                    tel3.ekle(fret);
                    c++;
                }
                continue;
            }
            if(tel3.top()<fret){
                tel3.ekle(fret);
                c++;
                continue;
            }
            continue;
        }
        if(tel ==4){
            if(tel4.isEmpty()){
                tel4.ekle(fret);
                c++;
                continue;
            }
            if(tel4.top()>fret){
                while(!tel4.isEmpty() && tel4.top()>fret){
                    tel4.sil();
                    c++;
                }
                if(tel4.isEmpty()){
                    tel4.ekle(fret);
                    c++;
                }
                if(!tel4.isEmpty() && tel4.top() != fret){
                    tel4.ekle(fret);
                    c++;
                }
                continue;
            }
            if(tel4.top()<fret){
                tel4.ekle(fret);
                c++;
                continue;
            }
            continue;
        }
        if(tel ==5){
            if(tel5.isEmpty()){
                tel5.ekle(fret);
                c++;
                continue;
            }
            if(tel5.top()>fret){
                while(!tel5.isEmpty() && tel5.top()>fret){
                    tel5.sil();
                    c++;
                }
                if(tel5.isEmpty()){
                    tel5.ekle(fret);
                    c++;
                }
                if(!tel5.isEmpty() && tel5.top() != fret){
                    tel5.ekle(fret);
                    c++;
                }
                continue;
            }
            if(tel5.top()<fret){
                tel5.ekle(fret);
                c++;
                continue;
            }
            continue;
        }
        if(tel ==6){
            if(tel6.isEmpty()){
                tel6.ekle(fret);
                c++;
                continue;
            }
            if(tel6.top()>fret){
                while(!tel6.isEmpty() && tel6.top()>fret){
                    tel6.sil();
                    c++;
                }
                if(tel6.isEmpty()){
                    tel6.ekle(fret);
                    c++;
                }
                if(!tel6.isEmpty() && tel6.top() != fret){
                    tel6.ekle(fret);
                    c++;
                }
                continue;
            }
            if(tel6.top()<fret){
                tel6.ekle(fret);
                c++;
                continue;
            }
            continue;
        }
    }
    cout<<c<<endl;
    return 0;
}
