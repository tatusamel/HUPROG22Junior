#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x; int y; int n;
        cin >> x >> y >> n;
        int max_k {0};
        for (int k = 0; k <= n; k++) {
            if (k % x == y) {
                max_k = k;
            }
        }
        cout << max_k;
    }
    return 0;
}
