#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size, height = 0, valley_count = 0;
    bool check_valley = false;
    string hike_str;
    cin >> size;
    cin >> hike_str;

    for (int i = 0; i < size; ++i) {
        if (hike_str.substr(i, 1) == "U") {
            height++;
        } else {
            height--;
        }
        if (check_valley && height >= 0){
            check_valley = false;
        }
        if (!check_valley && height < 0){
            check_valley = true;
            valley_count++;
        }
    }

    cout << valley_count << endl;

    return 0;
}