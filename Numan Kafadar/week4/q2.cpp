#include <iostream>
using namespace std;

/*
Time complexity is O(1).There is no any loop operation or recursion.It is constant time .
*/

int main(){
    int numberOFCases;cin>>numberOFCases;
    for(int i=0;i<numberOFCases;i++){
        int a,b;cin>>a>>b;
        int remainder=a%b;
        int v1=a-remainder;
        int v2=v1+b;
        int f1=a-v1;
        int f2=v2-a;
        cout<<min(f1,f2)<<endl;
    }

    return 0;
}