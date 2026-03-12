#include <iostream>
using namespace std;

enum enOddEven
{
    Odd = 1,
    Even = 2
};

int readN(int &n)
{
    cout << "Please Enter N: ";
    cin >> n;

    return n;
}

enOddEven isEven(int n)
{
    if (n % 2 == 0)
    {
        return enOddEven::Even;
    }

    else
    {
        return enOddEven::Odd;
    }
}

int sumOddEven(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (isEven(i) == enOddEven::Even)
        {
            sum += i;
        }
    }

    return sum;
}

void printSum(int sum)
{
    cout << "The Sum Of Even Numbers From 1 To N: " << sum;
}

int main()
{
    int n = 0;

    printSum(sumOddEven(readN(n)));
    return 0;
}