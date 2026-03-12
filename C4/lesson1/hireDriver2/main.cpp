#include <iostream>
using namespace std;

struct stInfo
{
    short age;
    bool driverLiscense;
    bool recommendation;
};

stInfo readData()
{
    stInfo info;
    cout << "Please Enter Age: ";
    cin >> info.age;

    cout << "Do You Have A Driving Liscense? ";
    cin >> info.driverLiscense;

    cout << "Do You Have Recommendation? ";
    cin >> info.recommendation;

    return info;
}

bool isHired(stInfo i)
{
    if (i.recommendation)
    {
        return true;
    }

    else
    {
        return (i.driverLiscense && i.age > 21);
    }
}

void printResult(bool b)
{
    if (b)
    {
        cout << "\nHired";
    }

    else
    {
        cout << "\nRejected";
    }
}

int main()
{
    printResult(isHired(readData()));

    return 0;
}