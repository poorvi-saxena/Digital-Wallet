#ifndef FACTORIES_H
#define FACTORIES_H

#include "PaymentMethod.hpp"

class PaymentFactory {
    public:
        virtual PaymentMethod *createMethod(string id) = 0;
        virtual ~PaymentFactory(){}
};


class CreditCardFactory : public PaymentFactory {
    PaymentMethod* createMethod(string id) override {}
};

class DebitCardFactory : public PaymentFactory {
    PaymentMethod* createMethod(string id) override {}
};

class UPIFactory : public PaymentFactory {
    PaymentMethod* createMethod(string id) override {}
};


#endif 