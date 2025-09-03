#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));

    int num, u_num;
    num = rand() % 100 + 1;

    cout << "\n\n\t\t\t\t\tNOTE : Guess the Number Between 1 to 100\n\n";

    do {
        cout << "Guess Number : ";
        cin >> u_num;

        if (u_num == num) {
            cout << "\n\t\t\t\t\tWohhhhhhhhho..! You Guessed the Correct Number" << endl;
        }
        else if (u_num > num) {
            cout << "\nPlease Guess Smaller One..!" << endl;
        }
        else if (u_num < num) {
            cout << "\nPlease Guess Bigger One..!" << endl;
        }
        else {
            break;
        }

    } while (u_num != num);

    return 0;
}
