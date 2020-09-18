#include "walletManager.h"

Wallet* createWallet(int septims) {
    Wallet* wallet = new(std::nothrow) Wallet;

    if (wallet)
        wallet->septims = septims;

    return wallet;
}

void destroyWallet(Wallet* wallet) {
    delete wallet;
}

Wallet* createWallets(int amount) {
    Wallet* wallets = new Wallet [amount];

    return wallets;
}

void destroyWallets(Wallet* wallets) {
        delete [] wallets;
}
