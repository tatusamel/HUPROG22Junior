// Seiko

#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n, t, i, temp;

    cin >> n >> t;

    int* graph = new int[n];

    graph[0] = 0;

    for(i = 1; i < n; i++){
        cin >> temp;
        graph[i] = i+temp;
    }
    i = 1;

    while(i < t){
        i = graph[i];
        if(i == t){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
