#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double area(double radius) {
    return M_PI * radius * radius;
}

int main () {

    double radius = 5;
    cout << fixed << setprecision(2) << area(radius);
    return 0;
}