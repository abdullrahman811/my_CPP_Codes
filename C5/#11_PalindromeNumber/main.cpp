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

bool isPalindrome(int num)
{
    return (num == reversedNumber(num));
}

void printResults(bool isPalindromeNumber)
{
    if (isPalindromeNumber)
    {
        cout << "\nThe Number Is Palindrome.\n";
    }

    else
    {
        cout << "\nThe Number Is Not Palindrome.\n";
    }
}

int main()
{
    printResults(isPalindrome(readPositiveNumber("Please Enter Positive Number: ")));

    return 0;
}