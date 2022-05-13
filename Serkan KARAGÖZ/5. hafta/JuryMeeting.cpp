#include<iostream>
#define MOD 998244353

using namespace std;

int fact(int number, int modulo){
    int i;
    long long int result = 1;
    for(i = 1; i < number+1; i++){
        result *= i;
        result %= modulo;
    }
    return result;
}

int factWithExceptionalNumber(int number, int exceptionalNumber, int modulo){
    int i;
    long long int result = 1;
    for(i = 1; i < number+1; i++){
        if(i != exceptionalNumber){
            result *= i;
            result %= modulo;
        }
    }
    return result;
}

long long int nicePermutation(int* arr, int len, int modulo){
    int i;
    int maxi = arr[0];
    // finding the max value
    for(i = 0; i < len; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    int counter = 0;

    for(i = 0; i < len; i++){
        if(arr[i] == maxi){
            counter++;
        }
    }

    // if ther has more than one max
    if(counter > 1){
        return fact(len, modulo);
    }

    counter = 0;
    for(i = 0; i < len; i++){
        if(arr[i] == maxi - 1){
            counter++;
        }
    }
    if(counter == 0) return 0;

    return ((long long int)counter * factWithExceptionalNumber(len, counter+1, modulo) ) % modulo;
}

int main(){

    int t, n, i, j;
    int* arr;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> n;
        arr = new int[n];
        for(j = 0; j < n; j++){
            cin >> arr[j];
        }
        cout << nicePermutation(arr, n, MOD) << endl;
        delete[] arr;
    }


    return 0;
}
