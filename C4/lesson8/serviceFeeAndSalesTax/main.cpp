#include <iostream>
using namespace std;

float readNum(string message)
{
    float num;

    do
    {
        cout << message << endl;
        cin >> num;
    } while (num < 0);

    return num;
}

float calculateServiceTax(float bill)
{
    float temp = bill;
    //temp += temp * 0.1;
    //temp += temp * 0.16;
    temp *= 1.1;
    temp *= 1.16;
    return temp;
}

void printResults(float totalBill)
{
    cout << "Total Bill = " << totalBill;
}

int main()
{
    float bill = readNum("Please Enter The Bill: ");

    printResults(calculateServiceTax(bill));

    return 0;
}