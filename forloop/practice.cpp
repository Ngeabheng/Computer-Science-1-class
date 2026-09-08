#include <iostream>
using namespace std;

// int main () {
//     int even;

//     for (int i=2;i<=20;i+=2) {
//         cout << i << endl;
//     }
//     return 0;
// }

// int main () {
//     int sum=0;
//     for (int i=0;i<=10;i++) {
//         sum = sum +i;
//     }
//     cout << sum << endl;
//     return 0;
// }

// int main () {
//     double avg;
//     int n;

//     int sum = 0;
//     for (int i=1; i <=5; i++) {
//         cout << "Enter number " << i  << " : " ;
//         cin >> n;
//         sum +=n ;
//         avg = sum/5;
//     }
//     cout << avg;
//     return 0;

// }

int main() {
    string pw = "password";
    bool isCorrect = true;
    string userpw, repw;

    cout << "Enter Your Password: ";
    cin >> userpw;

    if (userpw == pw) {
        cout <<"Password is Correct." << endl;
    }
    else if (userpw != pw ) {

        cout <<"Password is incorrect." << endl;
        for (int i=0; i <=1000 ;i++) {
            cout << "Re-enter your password: ";
            cin >> repw;
            if (repw != pw) {
                isCorrect = false;
                cout <<"Password is incorrect"<< endl;
            } else if (repw == pw) {
                isCorrect = true;
                cout <<"Password is correct.";
                break;
            }
        }
    }
    return 0;
}
