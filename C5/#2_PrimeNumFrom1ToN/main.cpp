#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

enPrimNotPrime CheckPrime(int Number)
{
    if (Number < 2)
        return enPrimNotPrime::NotPrime;

    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void printPrimeNumsFrom1ToN(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (CheckPrime(i) == Prime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    printPrimeNumsFrom1ToN(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}