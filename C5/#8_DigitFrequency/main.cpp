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

int digitsFrequency(int num, const short digit)
{
    int remainder = 0;

    int frequency = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;

        if (digit == remainder)
        {
            frequency ++;
        }
    }

    return frequency;
}

int main()
{
    int num = readPositiveNumber("Enter Number: ");
    short digit = readPositiveNumber("Enter The Digit To Check: ");

    cout << "The Digit Frequency Is: " << digitsFrequency(num, digit);

    return 0;
}