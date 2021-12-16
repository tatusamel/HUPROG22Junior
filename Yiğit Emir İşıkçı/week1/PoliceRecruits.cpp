#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    int r;
    int personel = 0;
    int untreated = 0;
    for(int i = 0;i<t;i++){
        cin>>r;
        if(r>0){
            personel+=r;
        }
        if(r == -1 && personel == 0){
            untreated++;
        }
        if(r==-1 && personel>0){
            personel--;
        }
    }
    cout<<untreated<<endl;


    return 0;
}
