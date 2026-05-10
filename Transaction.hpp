#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<string>
#include<ctime>
using namespace std;

enum TransactionType
{
    TRANSFER,
    DEPOSIT,
    WITHDRAWAL
};

class Transaction {
    private:
        string txnId;
        TransactionType type;
        double amount;
        string sender;
        string receiver;
        time_t timestamp;

        public:
            Transaction(string transactionId,
        TransactionType type,
        double amount,
        string sender,
        string receiver);

        void display();
};

#endif