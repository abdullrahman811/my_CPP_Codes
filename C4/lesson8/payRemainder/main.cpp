#include <iostream>
using namespace std;

int readNum(string message)
{
    int num;

    do
    {
        cout << message << "\n";
        cin >> num;
    } while (num < 0);

    return num;
}

int calculateRemainder(int paid, int totalBill)
{
    return paid - totalBill;
}

void printResults(int remainder)
{
    cout << "Remainder = " << remainder;
}

int main()
{
    int totalBill = readNum("Please Enter Total Bill: ");
    int cashPaid = readNum("Please Enter Cash Paid: ");

    printResults(calculateRemainder(cashPaid, totalBill));

    return 0;
}