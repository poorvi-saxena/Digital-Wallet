#include "DigitalWallet.hpp"
#include "vector"
#include "unordered_map"
#include "WalletSystem.hpp"


        WalletSystem :: WalletSystem(){};

        void WalletSystem :: addUser(int userId, DigitalWallet *dg) {
            if(allUsers.find(userId) != allUsers.end()) {
                cout << "User exists\n";
            } else {
                allUsers[userId] = dg;
            }
        };

        void WalletSystem :: removeUser(int userId) {
            if(allUsers.find(userId) != allUsers.end()) {
                delete allUsers[userId];
                allUsers.erase(userId);
            } else {
                cout << "User does not exist\n";
            }
        };

    bool WalletSystem :: checkAccNoValidity(int acc) {
        return (accNo.find(acc) != accNo.end());
    };

    void WalletSystem :: internalFundTransfer(int senderAccNo, int receiverAccNo, int amount) {
        // senderAccNo.debit -= amount;
        // receiverAccNo.credit += amount;
        
    };
    
    void WalletSystem :: transferFunds(int senderUserId, int senderAccNo, int receiverAccNo, int amount, int pin) {
        if(authenticateUser(senderUserId , pin)) {
            if(checkAccNoValidity(senderAccNo) && checkUserAccMapping(senderUserId, senderAccNo) && checkAccNoValidity(receiverAccNo)) {
                if(getBalance(senderAccNo) >= amount) {
                    internalFundTransfer(senderAccNo, receiverAccNo, amount);
                } else {
                    cout << "Insufficient Balance\n";
                }
            } else {
                cout << "Check Account numbers\n";
            }
        }
    };

    bool WalletSystem ::  authenticateUser(int user, int pin) {
        return auth.find(user) != auth.end() && auth[user] == pin;
    };
