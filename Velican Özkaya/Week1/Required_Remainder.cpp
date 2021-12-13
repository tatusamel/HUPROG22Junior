#include <iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int x,y,n,k;
        cin>>x>>y>>n;
        if(n%x>=y){
            k=n-n%x+y;
        }
        else{
            k=n-n%x+y-x;
        }
        cout<<k<<endl;
    }
    return 0;
}
