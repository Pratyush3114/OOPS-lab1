#include <iostream>
#include <string>
using namespace std;

class UserAccount {
private:
    string username;
    int loginattempts;
    string accountstatus;

public:
    UserAccount(string user, int attempts, string status) {
        username = user;
        loginattempts = attempts;
        accountstatus = status;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u) {
    cout << " Account Details" << endl;
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginattempts << endl;

    if (u.loginattempts >= 3)
        cout << "Account Status: Account Locked" << endl;
    else
        cout << "Account Status: Account Active" << endl;
}

int main() {
    UserAccount user("Pratyush", 2, "Active");

    checkAccount(user);

    return 0;
}