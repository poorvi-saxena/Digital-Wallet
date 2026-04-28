#include "Account.hpp"

    Account::Account(string fullName , string accountNumber) {
        this->fullName = fullName;
        this->accountNumber = accountNumber;
    }

    string Account::getAccountNumber() {
        return accountNumber;
    }
