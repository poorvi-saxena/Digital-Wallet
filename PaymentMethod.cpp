#include <iostream>
#include <string>

#include "PaymentMethod.hpp"

PaymentMethod::PaymentMethod(string id) {
    this->id = id;
}

string PaymentMethod::getId() {
    return id;
}

CreditCard::CreditCard(string id):PaymentMethod(id) {}
string CreditCard::getType()
{
    return "CreditCard";
}
 
    void CreditCard::pay() {
        // implementation
    }

    DebitCard::DebitCard(string id) :PaymentMethod(id) {}

    string DebitCard::getType()
    {
        return "DebitCard";
    }
 
    void DebitCard::pay() {
        // implementation
    }


UPI::UPI(string id) :PaymentMethod(id) {}



string UPI::getType() {
    return "UPI";
}
 
    void UPI:: pay() {
        // implementation
    }


