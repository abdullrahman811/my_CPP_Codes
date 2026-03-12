#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

void readAandB(float &a, float &b)
{
    cout << "Please Enter A: ";
    cin >> a;

    cout << "Please Enter B: ";
    cin >> b;
}

float circleArea(float a, float b)
{
    return M_PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void printCircleArea(float area)
{
    cout << "The Area Is: " << area;
}

int main()
{
    float a, b;

    readAandB(a, b);
    printCircleArea(circleArea(a, b));

    return 0;
}