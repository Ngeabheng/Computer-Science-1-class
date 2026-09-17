#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// double calculateArea (double a, double b)
// {
//     return a * b;
// }

// int main() 
// {
//     double n1 ,n2 ,x1 ,x2;

//     cout << "Enter length of rectangle 1: ";
//     cin >> n1;

//     cout << "Enter width of rectangle 1: ";
//     cin >> n2;

//     cout << calculateArea(n1,n2) << endl;

//     cout << "Enter length of rectangle 2: ";
//     cin >> x1;

//     cout << "Enter width of rectangle 2: ";
//     cin >> x2;

//     cout << calculateArea(x1,x2) << endl;

//     return 0;
    
// }

double unitPrice(double diameter, double price)
{
    double radius = diameter / 2;
    double area = 3.14 * radius * radius;
    double unit_price = price / area;

    return unit_price;
}

int main () 
{
    double diameter, price, radius, area, unit_price;

    cout << "Enter diameter: ";
    cin >> diameter;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Unit price: " << fixed << setprecision(2) << unitPrice(diameter,price) << endl;
    return 0;

}