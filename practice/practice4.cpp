#include <iostream>
using namespace std;

int main() {
    double weight;

    cout << "Enter your weight in lbs: ";
    cin >> weight;

    if (weight <= 0 ) {
        cout << "Invalid weight" << endl;
    } else if (weight >= 10) {
        cout <<"Shipping cost: 20$" << endl;
    } else if (weight >=5){
        cout << "Shipping cost: 12$" << endl;
    } else if (weight >=2) {
        cout << "Shipping cost: 5$" << endl;
    } else if (weight >0) {
        cout << "Shipping cost: 20$" << endl;

    }
    return 0;
}