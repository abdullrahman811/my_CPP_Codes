#include <iostream>
using namespace std;

struct stInfo
{
    int age;
    bool drivingLiscence;
};

stInfo readInfo()
{
    stInfo info;

    cout << "Please Enter Age: ";
    cin >> info.age;

    cout << "Do You Have A Driving Liscence? ";
    cin >> info.drivingLiscence;

    return info;
}

bool isAccepted(stInfo info)
{
    return (info.age > 21 && info.drivingLiscence);
}

void printState(bool state)
{
    if (state)
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
    printState(isAccepted(readInfo()));

    return 0;
}