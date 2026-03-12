#include <iostream>
using namespace std;

struct stTime
{
    float hours = 0;
    float days = 0;
    float weeks = 0;
};

stTime readNum(string message, stTime time)
{
    do {
    cout << message << "\n";
    cin >> time.hours;
    }while (time.hours <= 0);
    
    return time;
}

stTime returnDaysAndWeeks(stTime time)
{
    time.days = time.hours / 24;
    time.weeks = time.days / 7;

    return time;
}

void printResults(stTime time)
{
    cout << "\nTotal Hours: " << time.hours;
    cout << "\nTotal Days: " << time.days;
    cout << "\nTotal Weeks: " << time.weeks;
}

int main()
{
    stTime time;

    printResults(returnDaysAndWeeks(readNum("Please Enter Number Of Hours: ", time)));
    
    return 0;
}