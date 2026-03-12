#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << message;
        cin >> num;
    } while (num <= 0);

    return num;
}

int sumOfDigits(int num)
{
    int remainder = 0;

    int sumOfDigits = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;

        sumOfDigits += remainder;
    }

    return sumOfDigits;
}

int main()
{
    int num = readPositiveNumber("Enter Number: ");

    cout << "The Sum Of Digits Is: " << sumOfDigits(num);

    return 0;
}