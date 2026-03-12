#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << "Please Enter Positive Number: ";
        cin >> num;
    } while (num <= 0);

    return num;
}

int reversedNumber(int num)
{
    int remainder = 0, reversed = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;

        reversed = reversed * 10 + remainder;
    }

    return reversed;
}

void printResults(int reversed)
{
    cout << "\n\tThe Reversed Number Is: " << reversed;
}

int main()
{
    printResults(reversedNumber(readPositiveNumber("Please Enter Positive Number: ")));

    return 0;
}