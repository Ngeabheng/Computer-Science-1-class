// RT = 10$ / hour
// OT = 12$ / hour
// Condition
// - 40 hours / week
// Weekly salary only

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int rt$ = 10 , ot$ = 12 ;
    double salary, monday, tuesday, wednesday, thursday, friday;
    double rtmonday, rttuesday, rtwednesday, rtthursday, rtfriday;
    double otmonday, ottuesday, otwednesday, otthursday, otfriday;

    cout << "Enter the number of hours worked on Monday: ";
    cin >> monday;

    if (monday > 8) {
        rtmonday = 8;
        otmonday = monday - 8;
    } else {
        rtmonday = monday;
        otmonday = 0;
    }

    cout << "Enter the number of hours worked on Tuesday: ";
    cin >> tuesday;

    if (tuesday > 8) {
        rttuesday = 8;
        ottuesday = tuesday - 8;
    } else {
        rttuesday = tuesday;
        ottuesday = 0;
    }

    cout << "Enter the number of hours worked on Wednesday: ";  
    cin >> wednesday;

    if (wednesday > 8) {
        rtwednesday = 8;
        otwednesday = wednesday - 8;
    } else {
        rtwednesday = wednesday;
        otwednesday = 0;
    }

    cout << "Enter the number of hours worked on Thursday: ";
    cin >> thursday;

    if (thursday > 8) {
        rtthursday = 8;
        otthursday = thursday - 8;
    } else {
        rtthursday = thursday;
        otthursday = 0;
    }

    cout << "Enter the number of hours worked on Friday: ";
    cin >> friday;

    if (friday > 8 ) {
        rtfriday = 8;
        otfriday = friday - 8;
    }
     else {
        rtfriday = friday;
        otfriday = 0;
    }

    double total_rt = rtmonday + rttuesday + rtwednesday + rtthursday + rtfriday;
    double total_ot = otmonday + ottuesday + otwednesday + otthursday + otfriday;

    salary = (total_rt) * rt$ + (total_ot) * ot$;
    

    cout << "Total salary for the week is: " << fixed << setprecision(2) << salary << "$."<< endl;

    return 0;
}