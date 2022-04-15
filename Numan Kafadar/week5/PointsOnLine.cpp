#include <iostream>
 
using namespace std;
 
int main(){
    long long int n,d;cin>>n>>d;
    long long int* arr=new long long int[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }      
    long long int count=0;
    long long int j=0;
    for(long long int i = 2; i < n; i++){
        while (arr[i] - arr[j] > d) {
            j++;
        }
        //combination
        count += ((i - j) * (i - j - 1))/2;
    }
    cout<<count<<endl;
    return 0;
}