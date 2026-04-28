#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H
#include <string>
using namespace std;

class PaymentMethod {
    protected:
    string id;

    public:
        PaymentMethod(string id);
        string getId();
        virtual void pay() = 0;
};

#endif