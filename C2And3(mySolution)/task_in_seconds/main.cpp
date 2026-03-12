#include <iostream>
using namespace std;

int totalSec(int sec, short days, short hours, short mins){

    return sec + mins * 60 + hours * 3600 + days * 86400;

}

int main() {

    short days, hours, mins;
    int sec;

    cout << "Enter In Consecutive Way The Days, Hours, Minutes and Seconds Required To Do The Task : \n";
    cin >> days;
    cin >> hours;
    cin >> mins;
    cin >> sec;

    cout << "The Required Time To Do The Task In Seconds Is : " << totalSec(sec, days, hours, mins) << endl;

    return 0;
}