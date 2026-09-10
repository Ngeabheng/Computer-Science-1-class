#include <iostream>
using namespace std;

int main () {
    int i=1;

    int input;
    int zero = 0;
    int n =0;
    int p=0;
    while (i<=10) {
        cout << "Enter a number: ";
        cin >> input;

        i++;
        if (input == 0) {
            zero++;
        }
        if (input <0) {
            n++;
        }
        if (input >0) {
            p++;
        }
    }
    cout << "Positive numbers: " << p << endl;
    cout << "Negative numbers: " << n << endl;
    cout << "Zero numbers: " << zero << endl;
    return 0;
}

