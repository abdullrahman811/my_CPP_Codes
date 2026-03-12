#include <iostream>
#include <cmath>

using namespace std;

struct stCircle
{
    int r;
    float area;
};

void readR(stCircle &c)
{
    cout << "Please Enter R Of Your Circle: \n";
    cin >> c.r;
}

float calculateCircleArea(stCircle &c)
{
    return c.area = M_PI * pow(c.r, 2);
}

void printCircleArea(stCircle c)
{
    cout << "The Circle Area Is: " << c.area;
}

int main()
{
    stCircle circle;

    readR(circle);
    calculateCircleArea(circle);
    printCircleArea(circle);

    return 0;
}
