#include <iostream>
using namespace std;

int main()
{
    int pass, tries, balance, entered;

    pass = 1234;
    balance = 7500;

    cout << "Please Enter Pass: ";
    cin >> entered;
    tries = 1;

    while (entered != pass)
    {
        do {
            tries++;
            cout << "Wrong PIN\n";
            cout << "Please Enter Pass: ";
            cin >> entered;
        
        } while (tries < 3);

        if (tries == 3)
        {
            cout << "Card is locked!";
            return 0;
        }
    }

    if (entered == pass)
    {
        cout << "\nYour Balance is: " << balance;
    }

    return 0;
}