#include <iostream>
#include "Solution.h"
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    string deneme="aakaakabcedeee";
    cout<<deneme<<endl;
    deneme=Solution::removeDuplicates(deneme);
    cout<<deneme<<endl;
    return 0;
}
