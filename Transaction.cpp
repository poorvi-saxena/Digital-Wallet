#include "Transaction.hpp"

Transaction::Transaction(string transactionId,
        TransactionType type,
        double amount,
        string sender,
        string receiver){
            this->txnId = transactionId;
            this->type=type;
            this->amount = amount;
            this->sender = sender;
            this->receiver = receiver;
        }

        void Transaction::display(){
            
        }