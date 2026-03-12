#include <iostream>
#define M_PI
#include <cmath>
using namespace std;

int readL()
{
    int l;
    cout << "Please Enter L: ";
    cin >> l;

    return l;
}

float circleArea(int l)
{
    float area = pow(l, 2) / (4 * M_PI);

    return area;
}

void printArea(float Area)
{
    cout << "Area Is :" << Area;
}

int main()
{

    printArea(circleArea(readL()));

    return 0;
}