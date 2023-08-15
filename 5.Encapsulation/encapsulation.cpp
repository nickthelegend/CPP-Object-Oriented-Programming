#include <iostream>




class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};




int main(){

    BankAccount Nick(100);


    Nick.deposit(500);
    Nick.withdraw(100);
    std::cout<<Nick.getBalance()<<std::endl;



}