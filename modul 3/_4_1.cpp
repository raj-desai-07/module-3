#include<iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    double result;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
