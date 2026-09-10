#include <iostream>
using namespace std;

int main () {
    int input;

    do {
        cout << "Enter a positive number: ";
        cin >> input;
    } while ( input <= 0);
    return 0;
}