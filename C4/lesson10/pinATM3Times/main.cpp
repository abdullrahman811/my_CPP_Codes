#include <iostream>
using namespace std;

struct stUserData
{
    const int correctpin = 1234;
    const int balance = 7500;
};

int readPIN()
{
    int pin;
    cout << "Please Enter The PIN of 4 Numbers: ";
    cin >> pin;
    return pin;
}

bool validatePIN(int pin, stUserData data)
{
    if (pin == data.correctpin)
    {
        return true;
    }

    for (int i = 1; i <= 2; ++i)
    {
        system("color 4F");
        cout << "Incorrect PIN! You have " << (3 - i) << " attempt(s) left.\n";
        pin = readPIN();

        if (pin == data.correctpin)
        {
            return true;
        }
    }

    system("color 4F");
    cout << "\nATM Locked!\n";
    return false;
}

void printBalance(bool login, stUserData data)
{
    if (login)
    {
        cout << "Correct PIN\n";
        system("color 2F");
        cout << "Balance = " << data.balance << endl;
    }
}

int main()
{
    stUserData data;
    printBalance(validatePIN(readPIN(), data), data);
    return 0;
}