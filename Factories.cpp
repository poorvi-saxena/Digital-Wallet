#include "Factories.hpp"


PaymentMethod* CreditCardFactory::createMethod(string id) {
        return new CreditCard(id); 
};

    PaymentMethod* DebitCardFactory::createMethod (string id) {
        return new DebitCard(id); 
    }

    PaymentMethod* UPIFactory::createMethod (string id) {
        return new UPI(id); 
    }
