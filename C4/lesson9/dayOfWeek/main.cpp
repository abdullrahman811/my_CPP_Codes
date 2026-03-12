#include <iostream>
using namespace std;

enum enDay
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};

int readNumInRange(string message)
{
    int num;

    do
    {
        cout << message << "\n";
        cin >> num;
    } while (num <= 0 || num >= 8);

    return num;
}

enDay readDayNum(int day)
{
    return static_cast<enDay>(day);
}

string dayOfWeek(enDay day)
{
    switch (day)
    {
    case Sunday:
        return "Sunday";

    case Monday:
        return "Monday";

    case Tuesday:
        return "Tuesday";

    case Wednesday:
        return "Wednesday";

    case Thursday:
        return "Thursday";

    case Friday:
        return "Friday";

    case Saturday:
        return "Saturday";

    default:
        return "Invalid Day";
    }
}

void printResults(string day)
{
    cout << day;
}

int main()
{
    printResults(dayOfWeek(readDayNum(readNumInRange("Please Enter The Number Of The Day: "))));

    return 0;
}