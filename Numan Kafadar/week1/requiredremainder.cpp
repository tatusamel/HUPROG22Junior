#include <iostream>
 
 
using namespace std;
 
 
int main(){
    int k;cin>>k;
    int x,y,n;
 
 
    for (int i=0;i<k;i++){
        cin>>x;cin>>y;cin>>n;
        int result=n%x;
        if(result-y>=0){
            n=n-(result-y);
        }else{
            n=n-result-x+y;
        }
        cout<<n<<endl;
    }
 
 
    return 0;
}