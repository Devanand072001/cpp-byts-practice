#include <iostream>
#include <stdio_ext.h>
#include <ctime>

using namespace std;
class Account
{
    int totalBalance;
    public:
    int accountNumber;
    void deposit(int amt);
    void withDraw(int amt);
    void displayBalance();
};

void Account :: deposit(int amt)
{
    totalBalance += amt;
}

void Account :: withDraw(int amt){
    totalBalance -= amt;
}

void Account :: displayBalance()
{   time_t now = time(0);
    char * dateTime =  ctime(&now);
    cout << "Current balance of acc at "<< dateTime << " no: " << accountNumber << " is: " << totalBalance << endl;
}

int main()
{
    Account dev;
    cout << "Enter accout number :";
    cin >> dev.accountNumber;
    dev.deposit(110000);
    dev.displayBalance();
    dev.withDraw(500);
    dev.displayBalance();
}