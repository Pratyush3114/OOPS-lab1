#include <iostream>
#include <string>
using namespace std;

class WalletManager;

class DigitalWallet {
private:
    string userName;
    double walletBalance;
    bool walletStatus;

public:
    DigitalWallet(string name, double balance, bool status) {
        userName = name;
        walletBalance = balance;
        walletStatus = status;
    }

    friend class WalletManager;
};

class WalletManager {
public:
    void displayDetails(DigitalWallet &w) {
        cout << "----- Digital Wallet -----" << endl;
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. "
             << w.walletBalance << endl;

        cout << "Wallet Status: ";
        if (w.walletStatus)
            cout << "Active" << endl;
        else
            cout << "Disabled" << endl;
    }

    void addMoney(DigitalWallet &w, double amount) {
        if (!w.walletStatus) {
            cout << "Wallet is disabled. Cannot add money."
                 << endl;
            return;
        }

        w.walletBalance += amount;

        cout << "Rs. " << amount
             << " added successfully." << endl;
    }

    void deductMoney(DigitalWallet &w, double amount) {
        if (!w.walletStatus) {
            cout << "Wallet is disabled." << endl;
            return;
        }

        if (amount <= w.walletBalance) {
            w.walletBalance -= amount;

            cout << "Rs. " << amount
                 << " deducted successfully." << endl;
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }

    void disableWallet(DigitalWallet &w) {
        w.walletStatus = false;
        cout << "Wallet has been disabled." << endl;
    }

    void displayStatus(DigitalWallet &w) {
        if (w.walletStatus)
            cout << "Wallet Status: Active" << endl;
        else
            cout << "Wallet Status: Disabled" << endl;
    }
};

int main() {
    DigitalWallet wallet("Pratyush", 5000, true);

    WalletManager manager;

    manager.displayDetails(wallet);

    manager.addMoney(wallet, 1000);
    manager.deductMoney(wallet, 2500);

    manager.displayStatus(wallet);

    manager.disableWallet(wallet);

    cout << endl;

    manager.displayDetails(wallet);

    return 0;
}