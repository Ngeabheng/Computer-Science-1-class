#include <iostream>
using namespace std;

int main () {
    for (int i=1; i <=5; i++) {
        for (int j=i ; j<=5 ; j++) { // switch between the 5 and the i in this line
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}