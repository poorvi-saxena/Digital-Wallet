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
    virtual string getType() = 0;
    virtual void pay() = 0;

    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
    public:
    CreditCard(string id);
    string getType() {}

    void pay() {}
};

class DebitCard : public PaymentMethod {
    public:
    DebitCard(string id);
    string getType() {}

    void pay() {}
};

class UPI : public PaymentMethod {
    public:
    UPI(string id);
    string getType() {}

    void pay() {}
};

#endif
