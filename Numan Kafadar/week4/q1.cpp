#include <iostream>
using namespace std;

/*
to maximize gcd(),two numbers should be same. Since this is not possible,other option is
dividing the number to 2. Because other max gcd() would be between k,2k which is k.
if number is odd,add -1 to it.


*/

int main(){
    
    int caseNumber;cin>>caseNumber;
    for(int i=0;i<caseNumber;i++){
        int n;cin>>n;
        if(n%2==1){
            n=n-1;
        }
        cout<<n/2<<" "<<n<<endl;
    }
    
    return 0;
}