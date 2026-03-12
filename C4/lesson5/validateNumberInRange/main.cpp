#include <iostream>
using namespace std;

int readNum()
{
    int num;
    cout << "\nPlease Enter Number: ";
    cin >> num;

    return num;
}

bool isValid(int from, int to, int num)
{
    return (num >= from && num <= to);
}

int readUntilCorrect()
{
    int num1 = 0;

    do
    {
        num1 = readNum();
    }

    while (!isValid(21, 45, num1));

    return num1;
}

void printResults(int num)
{
    cout << "\nYour Number Is: " << num << "\n";
}

int main()
{
    printResults(readUntilCorrect());

    return 0;
}