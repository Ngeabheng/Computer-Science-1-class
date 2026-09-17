#include <iostream>
#include <cmath>
using namespace std;

string findEven (int a)
{
    if ( a%2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

int main () {
    int num1, num2;

    cout << "Enter Even number: ";
    cin >> num1;

    string even = findEven(num1);
    
    cout << even << endl;

    return 0;
}