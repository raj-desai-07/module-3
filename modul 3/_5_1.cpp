#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    for (int i = 1; i <= n; i++) {
    	cout << "Enter Number " << i << " : ";
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
