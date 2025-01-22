#include<iostream>
#include<string>

class Account {
public:
    std::string accountNumber;
    int balance;

    Account(std::string accountNumber) {
        this->accountNumber = accountNumber;
        this->balance = 0;
    }

    int getBalance() {
        return balance;
    }

    void withdrawAmount(int amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance" << std::endl;
        }
    }

    void depositAmount(int amount) {
        balance += amount;
    }
};

void transferAmount(Account& acc1, Account& acc2, int amount) {
    acc1.withdrawAmount(amount);
    acc2.depositAmount(amount);
}

int main() {
    Account user1("001");
    Account user2("002");

    user1.depositAmount(258);
    user2.depositAmount(100);

    std::cout << "User 1 balance: " << user1.getBalance() << std::endl;
    std::cout << "User 2 balance: " << user2.getBalance() << std::endl;

    transferAmount(user1, user2, 50);

    std::cout << "Transferring 50/- from User 1 to User 2:" << std::endl;
    std::cout << "User 1 balance: " << user1.getBalance() << std::endl;
    std::cout << "User 2 balance: " << user2.getBalance() << std::endl;

    return 0;
}
