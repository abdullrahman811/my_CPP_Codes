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
        return 1;
    }

    else
    {
        do
        {
            system("color 4F");
            cout << "Incorrect PIN!\n";
            pin = readPIN();
        } while (pin != data.correctpin);

        return 1;
    }
}

void printBalance(bool login, stUserData data)
{
    if (login)
    {
        cout << "Correct PIN\n";
        system("color 2F");
        cout << "Balance = " << data.balance;
    }
}

int main()
{
    stUserData data;

    printBalance(validatePIN(readPIN(), data), data);

    return 0;
}