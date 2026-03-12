#include <iostream>
using namespace std;

float readTotalSales()
{
    float totalSales;
    cout << "Please Enter Total Sales: ";
    cin >> totalSales;

    return totalSales;
}

float commissionPercentage(float totalSales)
{
    if (totalSales >= 1000000)
    {
        return 0.01;
    }

    else if (totalSales >= 500000)
    {
        return 0.02;
    }

    else if (totalSales >= 100000)
    {
        return 0.03;
    }

    else if (totalSales >= 50000)
    {
        return 0.05;
    }

    else
    {
        return  0;
    }
}

void printPercentage(float commissionPercentage, float totalSales)
{
    cout << "\nCommission Percentage Is: " << commissionPercentage;
    cout << "\nTotal Commission = " << commissionPercentage * totalSales;
}

int main()
{
    float totalSales = readTotalSales();
    printPercentage(commissionPercentage(totalSales), totalSales);

    return 0;
}