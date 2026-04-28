#include "DigitalWallet.hpp"
#include "vector"
#include "unordered_map"
#include "unordered_set"

class WalletSystem {
    protected:
        unordered_map<int, int> auth;
        // add in digital wallet also
        unordered_set<int> accNo;
        void internalFundTransfer(int senderAccNo, int receiverAccNo, int amount);

    public:
        unordered_map<int, DigitalWallet *> allUsers;
        WalletSystem();
        void addUser(int userId, DigitalWallet *dg);
        void removeUser(int userId);
        void transferFunds(int senderUserId, int senderAccNo, int receiverAccNo, int amount, int pin);
        bool authenticateUser(int user, int pin);
        bool checkAccNoValidity(int acc);
}; 