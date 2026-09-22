#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid amount." << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Display function
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(101, 5000);

    account.display();

    account.deposit(2000);
    account.withdraw(1500);

    account.display();

    return 0;
}