#include <iostream>
#include <string>

#include "PaymentMethod.hpp"

PaymentMethod::PaymentMethod(string id) {
    this->id = id;
}

string PaymentMethod::getId() {
    return id;
}
