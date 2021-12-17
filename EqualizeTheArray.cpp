#include <iostream>
#include <vector>

using namespace std;


int main() {
    int size, pos, sum_of = 0;
    cin >> size;
    vector<int> my_vec;
    for (int i = 0; i < 101; ++i) {
        my_vec.push_back(0);
    }
    for (int i = 0; i < size; ++i) {
        cin >> pos;
        my_vec[pos]++;
        if (my_vec[pos] > sum_of){
            sum_of = my_vec[pos];
        }
    }
    cout << size - sum_of << endl;

    return 0;
}
