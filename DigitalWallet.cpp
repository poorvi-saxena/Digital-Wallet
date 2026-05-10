#include <iostream>
#include <vector>
using namespace std;
#include "DigitalWallet.hpp"
#include "PaymentMethod.hpp"
#include "Account.hpp"


DigitalWallet::DigitalWallet(Account account) : account(account){};

void DigitalWallet::addPaymentMethod(PaymentMethod *pm)
{
    paymentMethods.push_back(pm);
    cout << "Payment Method added successfully \n";
};

    void DigitalWallet::deletePaymentMethod(string id) {
        for (int i = 0; i<paymentMethods.size(); i++)
        {
            if(paymentMethods[i]->getId() == id) {
                delete paymentMethods[i];
                paymentMethods.erase(paymentMethods.begin()+i);
                cout << "Payment method deleted successfully \n";
                return;
            }
        }
        cout << "Payment method does not exist \n";
        return;
    }

    void DigitalWallet::transferFunds(DigitalWallet &receiver, double amount){
        bool success = account.withdraw(amount);
        if(success) {
            receiver.account.deposit(amount);
            Transaction* txn = new Transaction("Txn-001", TRANSFER, amount, account.getAccountNumber(), receiver.account.getAccountNumber());
            txns.push_back(txn);
            cout << "Transfer successful\n";
        }
        cout << "Transfer unsuccessful\n";
    }


int main() {
    int id = 0;
    Account acc("Poorvi", "000000011282", 100000);
    DigitalWallet wallet(acc);

    
    int inp;
    cout << "How can we help you today? \n1. Access account info\n2.Add Payment Method\n3.Delete Payment Method\n";
    cin >> inp;
    switch(inp) {
        case 1:
            acc.getAccountNumber();
            break;
        case 2: {
            string cardnum;
            cout << "Enter Card number\n";
            cin >> cardnum;
            PaymentMethod* pm1 = new CreditCard(to_string(id));
            // wallet.addPaymentMethod(pm1);
            break;
        }
        case 3: {
            string inpId;
            cout << "Enter id\n";
            cin >> inpId;
            wallet.deletePaymentMethod(inpId);
            break;
        }
    }
    return 0;
};


// The digital wallet should support fund transfers between users and to external accounts.
// The system should handle transaction history and provide a statement of transactions.