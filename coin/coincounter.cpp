/*
 * Name: Chan Ngeabheng
 * Date: August 25, 2026
 * 
 * This program calculates the total numbers of coins inserted into
 * a vending machine. It takes the amount of quarters, dimes, and nickels
 * as input and outputs the total value in dollars and cents.
 */

#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels;

    // gets input from the user
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of nickels: ";
    cin >> nickels;

    // validate that all inputs are non-negative
    if (quarters < 0 || dimes < 0 || nickels < 0) {
        cout << "Error: All values must be non-negative." << endl;
        return 1;
    }

    // calculate total value in cents
    int totalCents = quarters * 25 + dimes * 10 + nickels * 5 ;

    double dollars = totalCents / 100.0;

    // output the result
    cout << "The total value is: " << totalCents << " cents or " << dollars << "$"<< endl;

    return 0;
}