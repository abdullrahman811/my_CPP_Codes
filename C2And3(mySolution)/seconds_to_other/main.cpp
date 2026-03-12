#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int secs, mod;
    short sec, min, hour, day;

    cout << "Enter Total Seconds :\n";
    cin >> secs;

    day = floor(secs / 86400);
    mod = secs % 86400;

    hour = floor(mod / 3600);
    mod = mod % 3600;

    min = floor(mod / 60);
    mod = mod % 60;

    sec = mod;

    cout << day << ":" << hour << ":" << min << ":" << sec << endl;



    return 0;
}