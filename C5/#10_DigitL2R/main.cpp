#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << message << endl;
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

void printDigits(int Number)
{
    int Sum = 0, Remainder = 0; 
    

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;    
        cout << Remainder << endl;  
    }
}

int main()
{
    printDigits(reversedNumber(readPositiveNumber("Please Enter Positive Number: ")));

    return 0;
}