#include <iostream>
using namespace std;

struct stPiggyBank
{
    int pennies = 0,
        nickels = 0,
        dimes = 0,
        quarters = 0,
        dollars = 0;
};

stPiggyBank readData()
{
    stPiggyBank piggyBankContent;

    cout << "Please Enter Pennies: ";
    cin >> piggyBankContent.pennies;

    cout << "Please Enter Nickles: ";
    cin >> piggyBankContent.nickels;

    cout << "Please Enter Dimes: ";
    cin >> piggyBankContent.dimes;

    cout << "Please Enter Quarters: ";
    cin >> piggyBankContent.quarters;

    cout << "Please Enter Dollars: ";
    cin >> piggyBankContent.dollars;

    return piggyBankContent;
}

int totalPennies(stPiggyBank piggyBankContent)
{
    return piggyBankContent.pennies + piggyBankContent.nickels * 5 + piggyBankContent.dimes * 10 + piggyBankContent.quarters * 25 + piggyBankContent.dollars * 100;
}

float totalDollars(int totalPennies)
{
    return static_cast<float>(totalPennies) / 100;
}

void printResults(float totalDollars, int totalPennies)
{
    cout << "\n\tTotal Pennies = " << totalPennies;
    cout << "\n\tTotal Dollars = " << totalDollars;
}

int main()
{
    int totalpennies = 0;

    totalpennies = totalPennies(readData());

    printResults(totalDollars(totalpennies), totalpennies);

    return 0;
}