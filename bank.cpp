#include <iostream>
#include <string>

using namespace std;

// Class Bank with function overloading
class Bank {
public:
    void deposit(int amount) {
        cout << "Depositing Rs." << amount << " in cash." << endl;
    }

    void deposit(float amount) {
        cout << "Depositing Rs." << amount << " via digital payment." << endl;
    }

    void deposit(string upiId, float amount) {
        cout << "Depositing Rs." << amount << " using UPI (" << upiId << ")." << endl <<endl;
    }
};

// Class Account with operator overloading
class Account {
private:
    int accountNumber;
    float balance;

public:
    Account(int accountNumber, float balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    // Overload + operator to transfer funds
    Account operator+(Account& other) {
        float transferAmount = 3000.0f;
        if (this->balance >= transferAmount) {
            this->balance -= transferAmount;
            other.balance += transferAmount;
            cout << endl << "Transferring Rs." << transferAmount << " from Account " << this->accountNumber << " to Account " << other.accountNumber << "..." << endl;
            cout << "New Account " << this->accountNumber << " Balance: Rs." << this->balance << endl;
            cout << "New Account " << other.accountNumber << " Balance: Rs." << other.balance << endl << endl;
        } else {
            cout << "Insufficient balance in Account " << this->accountNumber << "." << endl;
        }
        return *this;
    }

    // Overload - operator to withdraw funds
    Account operator-(float amount) {
        if (this->balance >= amount) {
            this->balance -= amount;
            cout << "Withdrawing Rs." << amount << " from Account " << this->accountNumber << "..." << endl;
            cout << "Remaining Balance: Rs." << this->balance << endl << endl;
        } else {
            cout << "Insufficient balance in Account " << this->accountNumber << "." << endl;
        }
        return *this;
    }

    // Function to display account details
    void displayDetails() {
        cout << "Account " << accountNumber << " Balance: Rs." << balance << endl;
    }
};

int main() {
    Bank bank;

    bank.deposit(5000);
    bank.deposit(1500.75f);
    bank.deposit("gpay@upi", 2500.0f);

    Account account1(1, 10000.0f);
    Account account2(2, 5000.0f);

    account1.displayDetails();
    account2.displayDetails();

    account1 + account2;

    account1 - 2000.0f;

    return 0;
}
