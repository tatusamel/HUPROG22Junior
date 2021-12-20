#include <iostream>
#include "RecentCounter.h"
using namespace std;

int main() {
    RecentCounter* obj = new RecentCounter();
    int a=10;
    while(true) {
        a--;
        if (a == 0) {
            break;
        }
        cout<<"enter a number";
        int b;
        cin>>b;
        int param_1 = obj->ping(b);
        cout <<" "<< param_1 << endl;
    }
    return 0;
}
