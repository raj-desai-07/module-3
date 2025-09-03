#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter student's marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0) {
        cout << "Grade: F" << endl;
    }
    else {
        cout << "Invalid marks entered!" << endl;
    }

    return 0;
}
