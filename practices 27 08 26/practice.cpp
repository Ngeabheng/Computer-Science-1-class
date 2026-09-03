#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

    string name;
    cout << "Enter your name: ";
    cin >> name;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    double gpa;
    cout << "Enter your GPA: ";
    cin >> gpa >> setprecision (2);

    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    string enrollement_status;
    cout << "Enter your enrollment status (1 for enrolled, 0 for not enrolled): ";
    cin >> enrollement_status;

    if ( enrollement_status == "no") {
        cout << "You are not enrolled." << endl;
    } if (enrollement_status == "yes") {   
        cout << "You are enrolled." << endl;    
    }


    cout << "Student Name: " << name << " Age " << age << " GPA: " << gpa << " Grade: " << grade << " Enrollement Status: " << enrollement_status <<endl;

    return 0;
}