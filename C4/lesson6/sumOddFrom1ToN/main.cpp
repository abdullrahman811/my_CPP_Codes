#include <iostream>
using namespace std;

enum enOddEven
{
    Odd = 1,
    Even = 2
};

int readN(int& n)
{

    cout << "Please Enter N: ";
    cin >> n;

    return n;
}

enOddEven checkOddEven(int number)
{
    if (number % 2 == 0)
    {
        return enOddEven::Even;
    }

    else
    {
        return enOddEven::Odd;
    }
}

int SumOddNums(int n)
{

    int temp = 0;

    if (n > 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (checkOddEven(i) == enOddEven::Odd)
            {
                temp += i;
            }
        }
    }

    return temp;
}

void printSum(int sum)
{
    cout << "\nThe Sum Of Odd Numbers From 1 To N Is: " << sum;
}

int main()
{
    int n = 0;

    printSum(SumOddNums(readN(n)));

    return 0;
}