#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string customerName;
    float balance;

public:
    BankAccount(int acc, string name, float bal) {
        accountNumber = acc;
        customerName = name;
        balance = bal;
    }

    friend void compareBalance(const BankAccount &a1,
                               const BankAccount &a2);
};

void compareBalance(const BankAccount &a1,
                    const BankAccount &a2) {
    if (a1.balance > a2.balance) {
        cout << "Higher Balance Holder: "
             << a1.customerName << endl;
        cout << "Balance: " << a1.balance << endl;
    } else {
        cout << "Higher Balance Holder: "
             << a2.customerName << endl;
        cout << "Balance: " << a2.balance << endl;
    }
}

int main() {
    BankAccount b1(1001, "Riya", 45000);
    BankAccount b2(1002, "Aman", 60000);

    compareBalance(b1, b2);

    return 0;
}