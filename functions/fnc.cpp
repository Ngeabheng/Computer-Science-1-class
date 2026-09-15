#include <iostream>
#include <cmath>
using namespace std;

double length(double area) {
    return sqrt(area);
}

int main () {

    double area = 81;
    cout << length(area);
    return 0;
}