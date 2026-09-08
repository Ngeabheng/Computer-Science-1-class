// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int day; 

// //     cout << "Enter a day number (1-7): ";
// //     cin >> day;

// //     switch (day)
// //     {
// //         case 1:
// //             cout << "Monday" << endl;
// //             break;

// //         case 2:
// //             cout << "Tuesday" << endl;
// //             break;

// //         default:
// //             cout << "Invalid day number" << endl;
// //             break;
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main () {
//     char grade;

//     cout << "Enter your grade (A-F):";
//     cin >> grade;

//     switch (grade) {
//         case 'A':
//             cout << "Excellent";
//             break;
        
//         case 'B':
//             cout << "Good";
//             break;
        
//         case 'C':
//             cout << "Average";
//             break;

//         case 'D':
//             cout << "Needs Improvement";
//             break;

//         case 'F':
//             cout << "Fail";
//             break;
//         default:

//         cout <<"Invalid";

//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main () {
    double firstnum, secondnum, result;
    int choice;

    cout <<"Enter your first number: ";
    cin >> firstnum;

    cout <<"Enter your second number: ";
    cin >> secondnum;

    cout <<"1. Addition" << endl;
    cout <<"2. Subtraction" << endl;
    cout <<"3. Multiplication" << endl;
    cout <<"4. Division" << endl;

    cout <<"Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
        cout << "Result: " << firstnum + secondnum << endl;
        break;

        case 2:
        cout << "Result: " << firstnum - secondnum << endl;
        break;

        case 3:
        cout <<  "Result: " << firstnum * secondnum << endl;
        break;

        case 4:
        cout << "Result: " << firstnum / secondnum << endl;
        break;

        default:
        cout << "invalid" << endl;
    }
    return 0;
}