#include<iostream>
using namespace std;

int globalVar = 100; // Global variable

void showGlobal() {
    cout << "Inside showGlobal(), globalVar = " << globalVar << endl;
}

void localExample() {
    int localVar = 50; // Local variable
    cout << "Inside localExample(), localVar = " << localVar << endl;
    cout << "Inside localExample(), globalVar = " << globalVar << endl;
}

int main() {
    int localVar = 10; // Local variable in main
    cout << "Inside main(), localVar = " << localVar << endl;
    cout << "Inside main(), globalVar = " << globalVar << endl;

    localExample();
    showGlobal();

    return 0;
}
