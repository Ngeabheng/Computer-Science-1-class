#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int apples, bananas, milk_bottles;
    double price_apples = 1.25, price_bananas = 0.75, price_milk_bottles = 2.50;

    cout << "Enter the number of apples: ";
    cin >> apples;

    cout << "Enter the number of bananas: ";
    cin >> bananas;

    cout << "Enter the number of milk bottles: ";
    cin >> milk_bottles;

    double total_apples = apples * price_apples;
    double total_bananas = bananas * price_bananas;
    double total_milk_bottles = milk_bottles * price_milk_bottles;

    double grandtotal = total_apples + total_bananas + total_milk_bottles;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "---------------Invoice---------------" << endl;
    cout << "Total cost of apples: " << total_apples << "$" << endl;
    cout << "Total cost of bananas: " << total_bananas << "$" << endl;
    cout << "Total cost of milk bottles: " << total_milk_bottles << "$" << endl;
    cout << "Grand total: " << grandtotal << "$" << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;

    return 0;
}