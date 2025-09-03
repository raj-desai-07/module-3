#include<iostream>
using namespace std;

int main() {
    int intVal = 10;
    double doubleVal = intVal;

    cout << "Implicit Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to double: " << doubleVal << endl;

    char charVal = 'A';
    int asciiVal = charVal;
    cout << "Character: " << charVal << endl;
    cout << "Converted to ASCII (int): " << asciiVal << endl;

    double pi = 3.14159;
    int intPi = (int)pi;
    int intPi2 = static_cast<int>(pi);

    cout << "\nExplicit Conversion:" << endl;
    cout << "Double value: " << pi << endl;
    cout << "Converted to int (C-style cast): " << intPi << endl;
    cout << "Converted to int (static_cast): " << intPi2 << endl;

    float num = 9.87f;
    int intNum = static_cast<int>(num);
    cout << "Float value: " << num << endl;
    cout << "Converted to int (static_cast): " << intNum << endl;

    return 0;
}

