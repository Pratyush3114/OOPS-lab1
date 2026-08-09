#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
private:
    string customerName;
    string mobileNumber;
    double balance;

public:
    MobileRecharge() {
        balance = 0.0;
    }

    void acceptDetails() {
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void rechargeBalance(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully added $" << amount << "\n";
        } else {
            cout << "Invalid recharge amount!\n";
        }
    }

    void deductForPlan(double planCost) {
        if (planCost > 0 && balance >= planCost) {
            balance -= planCost;
            cout << "Plan activated successfully! Deducted: $" << planCost << "\n";
        } else if (balance < planCost) {
            cout << "Error: Insufficient balance for this plan!\n";
        } else {
            cout << "Invalid plan cost!\n";
        }
    }

    void displayBalance() {
        cout << "\n--- Customer Details --- \n";
        cout << "Name: " << customerName << "\n";
        cout << "Mobile Number: " << mobileNumber << "\n";
        cout << "Current Updated Balance: $" << balance << "\n";
    }
};

int main() {
    MobileRecharge user;
    
    user.acceptDetails();
    
    double addAmount;
    cout << "\nEnter amount to recharge/add to balance: ";
    cin >> addAmount;
    user.rechargeBalance(addAmount);
    
    double planCost;
    cout << "\nEnter recharge plan cost to deduct: ";
    cin >> planCost;
    user.deductForPlan(planCost);
    
    user.displayBalance();
    
    return 0;
}
