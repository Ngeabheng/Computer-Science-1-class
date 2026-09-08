#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double rpay, otpay, totalpayweek;
    int hour;

    cout << "Enter your regular pay rate: ";
    cin >> rpay;

    cout << "Enter the number of hours worked in a week: ";
    cin >> hour;

    if (hour > 40) {
        totalpayweek = (40 * rpay) + ((hour - 40) * rpay * 1.5);
    }   else {
        totalpayweek = (hour * rpay);
    }

    cout <<"Your total payment for this week is: $" <<  fixed << setprecision(2) << totalpayweek << endl;

    return 0;
}