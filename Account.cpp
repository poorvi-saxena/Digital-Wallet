#include "Account.hpp"
#include<mutex>

mutex mtx;

Account::Account(string fullName, string accountNumber, double balance)
{
    this->fullName = fullName;
    this->accountNumber = accountNumber;
    this->balance = balance;
}

    string Account::getAccountNumber() {
        return accountNumber;
    }

    void Account::deposit(double amount){
        lock_guard<mutex> lock(mtx);
        this->balance += amount;
    }

    bool Account::withdraw(double amount){
        lock_guard<mutex> lock(mtx);
        if(this->balance>=amount)
        {
            this->balance -= amount;
            return true;
        }
        cout << "Insufficient balance\n";
        return false;
    }

    double Account::getBalance(){
        return this->balance;
    }