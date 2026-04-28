#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "PaymentMethod.hpp"

#include <string>

class CreditCard :public PaymentMethod {
    protected:
        string cardNumber;

        public:
            CreditCard(string id, string cardNumber);
            void pay() override;
};

#endif