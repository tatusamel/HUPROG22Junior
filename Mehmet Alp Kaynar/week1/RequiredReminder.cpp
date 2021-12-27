#include <iostream>

using namespace std;

int main() {
    long long int size, x,y,z;
    cin >> size;
    for (long long int  i = 0; i < size; ++i) {
        cin >> x >> y >> z;
        long long int  result = (z/x)*x + y <= z ? (z/x)*x + y : (z/x)*x + y - x;
        cout << result << endl;
    }
    return 0;
}
