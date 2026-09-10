#include <iostream>
using namespace std;

int main () {
    int input;
    int sum=0;
    int count = 1;
    
    while (count <= 5) {
        cout << "Enter a number: ";
        cin >> input;
        count++;

        sum = sum + input;
    }
    cout << sum;
    return 0;
}