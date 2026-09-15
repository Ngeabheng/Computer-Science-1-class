#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double longest(double side1,double side2) {
    return sqrt(pow(side1, 2) + pow (side2, 2));
}

int main () {

    double side1, side2;
    cout << "Enter side 1: ";
    cin >> side1;

    cout << "Enter side 2: ";
    cin >> side2;

    cout << "Longest side is: "<< longest(side1,side2) << endl;
    return 0;
}