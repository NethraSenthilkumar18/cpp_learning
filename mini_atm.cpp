
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 1000;

    do
    {
        cout << "\n===== MINI ATM =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Balance: Rs." << balance;
                break;

            case 2:
            {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;

                if(amount > 0)
                {
                    balance += amount;
                    cout << "Deposit Successful!";
                }
                else
                    cout << "Invalid Amount!";
                break;
            }

            case 3:
            {
                double amount;
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if(amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    cout << "Withdrawal Successful!";
                }
                else
                    cout << "Insufficient Balance!";
                break;
            }

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}
