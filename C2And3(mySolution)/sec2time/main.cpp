#include <iostream>
#include <cmath>

using namespace std;

void sec2time() {

    int days, hours, mins, sec, totalsec, mod;

    cout << "Enter The Time In Seconds : \n";
    cin >> totalsec;

    days = totalsec / (pow(60, 2) * 24);
    mod  = totalsec % static_cast<int>(pow(60, 2) * 24);

    hours = mod / pow(60, 2);
    mod %= static_cast<int>(pow (60, 2));

    mins = mod / 60;
    mod %= 60;

    sec = mod;

    cout << "Task In Format Is : " << days << ":" << hours << ":" << mins << ":" << sec;

};

int main(){

    sec2time();

    return 0;
}