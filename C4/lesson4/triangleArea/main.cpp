#include <iostream>
using namespace std;

struct stTriangle
{
    int base;
    int height;
    float area;
};

void readData(stTriangle &info)
{
    cout << "Please Enter Base: \n";
    cin >> info.base;

    cout << "Please Enter Height: \n";
    cin >> info.height;
}

void area(stTriangle &info)
{
    info.area =  static_cast<float>(info.base * info.height)/2;
}

void printArea(stTriangle info)
{
    cout << "The Area Is: " << info.area;
}

int main()
{
    stTriangle info;
    
    readData(info);
    area(info);
    printArea(info);

    return 0;
}