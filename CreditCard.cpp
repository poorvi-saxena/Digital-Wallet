#include "CreditCard.hpp"
using namespace std;
#include "PaymentMethod.hpp"
#include <iostream>

CreditCard::CreditCard(string id, string cardNumber):PaymentMethod(id) {
    this->cardNumber = cardNumber;
}

void CreditCard::pay() {
    cout << "Paid using Credit Card ending with (xx" << cardNumber.substr(cardNumber.size() - 4) << ") \n";
}