#include <iostream>
#include <cmath>
using namespace std;

struct stTime
{
    int seconds;
    int minutes;
    int hours;
    int days;
};

stTime readTime()
{
    stTime time;

    cout << "Please Enter The Number Of Days: " << "\n";
    cin >> time.days;

    cout << "Please Enter The Number Of Hours: " << "\n";
    cin >> time.hours;

    cout << "Please Enter The Number Of Minutes: " << "\n";
    cin >> time.minutes;

    cout << "Please Enter The Number Of Seconds: " << "\n";
    cin >> time.seconds;

    return time;
}

stTime calcTotalSec(stTime time)
{
    time.seconds = time.seconds +  time.minutes * 60 + time.hours * pow(60, 2) + time.days * pow(60, 2) * 24;
    return time;
}

void printResults(stTime time)
{
    cout << "\nThe Total Number Of Seconds Is: " << time.seconds << endl;
}

int main()
{
    printResults(calcTotalSec(readTime()));

    return 0;
}