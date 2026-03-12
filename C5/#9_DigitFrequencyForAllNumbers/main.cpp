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

int digitsFrequency(int num, short digit)
{
    int remainder = 0;

    int frequency = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;

        if (digit == remainder)
        {
            frequency++;
        }
    }

    return frequency;
}

void printFrequencies(int num)
{
    for (int i = 0; i <= 9; i++)
    {
        int freq = digitsFrequency(num, i);

        if (freq == 0)
        {
            continue;
        }

        cout << "\nThe Digit " << i << " Frequency Is: " << freq;
    }
}

int main()
{
    const int num = readPositiveNumber("Enter Number: ");

    printFrequencies(num);

    return 0;
}