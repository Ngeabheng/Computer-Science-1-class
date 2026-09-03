#include <iostream>
using namespace std;

int main() {
    int point;

    cout << "Enter point: ";
    cin >> point;

    if (point >= 33) {
        cout <<  "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}