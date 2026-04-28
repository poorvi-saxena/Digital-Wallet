
#ifndef DWALLET_H
#define DWALLET_H

#include <iostream>
#include <vector>
using namespace std;
#include "DigitalWallet.hpp"
#include "PaymentMethod.hpp"
#include "Account.hpp"

// The digital wallet should allow users to create an account and manage their personal information.
// Users should be able to add and remove payment methods, such as credit cards or bank accounts.
class DigitalWallet {
    private:
        int userId;
        string fullName;
        Account account;
        vector<PaymentMethod *> paymentMethods;

    public:
        DigitalWallet(Account account);
        void addPaymentMethod(PaymentMethod *pm);
        void deletePaymentMethod(string id);
};

#endif