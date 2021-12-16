#include <iostream>
using namespace std;

int main() {

    int t;
    int x, y, n;
    cin>>t;
    for(int i = 0;i<t;i++){
        cin>>x>>y>>n;
        int max = 0;
        for(int j = 0;j<=n;j++){
            if(j%x == y ){
                if(j>max){
                    max = j;
                }
            }
        }
        cout<<max<<endl;
    }

    return 0;
}
