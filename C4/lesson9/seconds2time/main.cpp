#include <iostream>
using namespace std;

struct stTime
{
    int sec;
    int min;
    int hour;
    int day;
};

int readPositiveNum(string message)
{
    int num;
    do
    {
        cout << message << "\n";
        cin >> num;
    } while (num <= 0);

    return num;
}

stTime convertSecToTime(int sec)
{
    stTime time;
    int remainder = 0;

    int secPerDay = 24 * 60 * 60;
    int secPerHour = 60 * 60;
    int secPerMin = 60;

    time.day = sec / secPerDay;
    
    remainder = sec % secPerDay;

    time.hour = remainder / secPerHour;

    remainder = remainder % secPerHour;

    time.min = remainder / secPerMin;

    time.sec = remainder % 60;

    return time;
}

void printResults(stTime time)
{
    cout << "\n"
         << time.day << " : " << time.hour << " : " << time.min << " : " << time.sec;
}

int main()
{

    int totalsec = readPositiveNum("Please Enter Total Seconds: ");

    printResults(convertSecToTime(totalsec));

    return 0;
}