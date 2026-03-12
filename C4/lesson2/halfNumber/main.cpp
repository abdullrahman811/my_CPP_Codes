#include <iostream>
using namespace std;

int readNum()
{
    int num;
    cout << "Please Enter Num: ";
    cin >> num;

    return num;
}

float halfNum(int num)
{
    return static_cast<float>(num) / 2;
}

void print(float half)
{
    cout << "The Half Is: " << half;
}

int main()
{
    print(halfNum(readNum()));

    return 0;
}