#include <iostream>
using namespace std;

int readN(int &n)
{
    cout << "Please Enter Positive N: ";
    cin >> n;

    return n;
}

int isN_Positive(int &n)
{
    do
    {
        n = readN(n);
    } while (n < 0);

    return n;
}

int factorial(int n)
{
    int sum = 1;

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    return sum;
}

void printSum(int sum)
{
    cout << "\nThe Factorial Of N: " << sum;
}

int main()
{
    int n = 0;

    printSum(factorial(isN_Positive(n)));

    return 0;
}