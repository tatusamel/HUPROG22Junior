#include <iostream>

using namespace std;

int main(){
    long long int temp, i, hired = 0, death = 0;
    cin >> temp;

    for (long long int j = 0; j < temp; ++j) {
        cin >> i;
        if (i > 0){
            if (hired < 10){
                hired += i;
                if (hired > 10){hired = 10;}
            }
        }
        else{
            if (hired > 0){
                if (hired > -i){
                    hired += i;
                }
                else{
                    death += i + hired;
                    hired = 0;
                }
            }
            else{
                death += i;
            }
        }
    }

    cout << -death << endl;
}
