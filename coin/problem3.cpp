#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Quarters: ";
    cin >> num1;

    cout << "Dimes: ";
    cin >> num2;

    cout << "Nickels: ";
    cin >> num3;

    cout << "Dollars: " << num1*0.25 + num2*0.10 + num3*0.05 << "$" << endl;

    return 0;
}