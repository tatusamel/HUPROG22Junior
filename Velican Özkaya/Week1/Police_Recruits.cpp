#include <iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    int employee=0;
    int untreated=0;
    for(int i=0;i<times;i++){
        int a;
        cin>>a;
        if(a==-1){
            if(employee>0){
                employee--;
            }
            else{
                untreated++;
            }
        }
        else{
            employee+=a;
        }
    }
    cout<<untreated;
    return 0;
}