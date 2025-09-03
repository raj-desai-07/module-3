#include<iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance = 0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Initial balance can't be negative. Setting to 0." << endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    cout << "Initial Balance: " << account.getBalance() << endl;

    account.deposit(500);
    cout << "Current Balance: " << account.getBalance() << endl;

    account.withdraw(200);
    cout << "Current Balance: " << account.getBalance() << endl;

    account.withdraw(2000);

    return 0;
}
