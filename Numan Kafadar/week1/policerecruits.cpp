#include <iostream>
#include <fstream>
 
using namespace std;
 
 
int main(){
    int k;cin>>k;
    int hired=0; int untreated=0;
    int x;
    for (int i=0;i<k;i++){
        cin>>x;
        if (x==-1){
            if(hired>0){
                hired--;
            }else{
                untreated++;
            }
        }else{
            if(x<=10){
                hired+=x;
            }
 
        }
    }
    cout<<untreated<<endl;
 
    return 0;
}