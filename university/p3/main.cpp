#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{
    int r;
    float s, p;

    cout << "Please Enter R:\n";
    cin >> r;

    s = M_PI * pow(r, 2);
    p = 2 * M_PI * r;

    cout << "The Area Is : " << s << endl << "And Parallel Is: " << p;

    return 0;
}