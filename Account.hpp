#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "PaymentMethod.cpp"

class Account {
    private:
    string fullName;
    string accountNumber;
    double balance;

public:
    Account(string fullName, string accountNumber, double balance);
    string getAccountNumber();
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance();
};

#endif