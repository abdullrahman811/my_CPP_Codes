#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long days, hours, mins, secs, totalsec;

    cout << "Enter Task Duration Time (Days, Hours, Minutes, Seconds): \n";
    cin >> days;
    cin >> hours;
    cin >> mins;
    cin >> secs;

    totalsec = days * pow(60, 2) * 24 + hours * pow(60, 2) + mins * 60 + secs;

    cout << "Task Duration In Seconds Is : " << totalsec ;

    return 0;
}