#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "PaymentMethod.cpp"

class Account {
    private:
    string fullName;
    string accountNumber;

    public:
    Account(string fullName, string accountNumber);
    string getAccountNumber();
};

#endif