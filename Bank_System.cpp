#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

class Bank
{
private:
    string name;
    string acntType;
    int acntNo, balance;

public:
    Bank()
    {
        cout << "Name Of Account Holder :- ";
        cin >> name;
        cout << "Account Type :- ";
        cin >> acntType;
        cout << "Account No :- ";
        cin >> acntNo;
        cout << "Openning Balance :- ";
        cin >> balance;
    }

    void deposit()
    {
        int bal;
        cout << "Enter amount";
        cin >> bal;
        balance += bal;
        cout << "Money has been deposited, Total Balance :- " << balance << endl;
        cin.ignore().get();
    }

    void withdraw()
    {
        int bal;
        cout << "Enter amount";
        cin >> bal;
        if(bal>balance)
          cout << "Not enough money in your account" << endl;
       else{
            balance -= bal;
            cout << "Money has been withdrawd, Total Balance :- " << balance << endl;
        }
        cin.ignore().get();
    }

    void display()
    {
        cout << setfill('*') << setw(2 * 16) << "*" << endl;
        cout << setfill(' ') << fixed;
        cout << "        Account Detail" << endl;
        cout << setfill('*') << setw(2 * 16) << "*" << endl;
        cout << setfill(' ') << fixed;
        cout << setw(15) << "Name" << setw(15) << name << endl;
        cout << setw(15) << "Account Type" << setw(15) << acntType << endl;
        cout << setw(15) << "Account No" << setw(15) << acntNo << endl;
        cout << setw(15) << "Balance" << setw(15) << balance << endl;
        cin.ignore().get();
    }
};

int main()
{
    Bank ob;
    int n;
    do
    {
        system("clear");
        cout << "Enter following key ";
        cout << "1 :- Deposit money" << endl;
        cout << "2 :- Withdraw money" << endl;
        cout << "3 :- Display" << endl;
        cout << "4 :- Exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            ob.deposit();
            break;
        case 2:
            ob.withdraw();
            break;
        case 3:
            ob.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "You pressed wrong key" << endl;
            break;
        }
    } while (true);

    return 0;
}
