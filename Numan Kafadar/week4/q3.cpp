#include <iostream>
#include <vector>
using namespace std;

bool gcd(int n1,int n2,int n3){
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    if(n1==n3){
        return true;
    }else{
        return false;
    }
}

int main(){
    int tcases;cin>>tcases;
    for(int i=0;i<tcases;i++){
        int n;cin>>n;
        int c=1;
        for(int a=2;a<=(n-1)/2;a++){
            int b=n-a-1;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            if(a!=b&&gcd(a,b,1)){
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
            
        }      
    }
    return 0;
}