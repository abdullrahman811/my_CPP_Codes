#include <iostream>
#include <cmath>
using namespace std;

int readPositiveNum(string message)
{
    int num;

    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}

int months2SettleLoan(int loan, int monthly)
{
    return ceil(static_cast<float>(loan) / monthly);
}

void printResults(int months2settle)
{
    cout << "You need " << months2settle << " months to settle the loan." << "\n";
}

int main()
{
    int loan = readPositiveNum("Please Enter The Total Loan: ");
    int monthly = readPositiveNum("Please Enter Monthly Payment: ");

    printResults(months2SettleLoan(loan, monthly));

    return 0;
}