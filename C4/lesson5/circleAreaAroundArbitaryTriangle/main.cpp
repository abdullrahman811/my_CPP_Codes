#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

void readTriangle(float &a, float &b, float &c)
{
    cout << "Please Enter A: ";
    cin >> a;

    cout << "Please Enter B: ";
    cin >> b;

    cout << "Please Enter C: ";
    cin >> c;
}

float calculateCircleArea(int a, int b, int c)
{
    float p = (a + b + c) / 2;

    float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    return M_PI * (pow(t, 2));
}

void printCircleArea(float area)
{
    cout << "\nCircle Area Is: " << area;
}

int main()
{
    float a, b, c;

    readTriangle(a, b, c);
    printCircleArea(calculateCircleArea(a, b, c));

    return 0;
}