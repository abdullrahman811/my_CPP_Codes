#include <iostream>
using namespace std;

enum enIsPerfectNumber
{
    perfectNum,
    notPerfectNum
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

int sumOfDivisors(int num)
{
    int divisorsSum = 0;
    
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            //cout << "\ndebug: " << i << endl;
            divisorsSum += i;
        }
    }

    return divisorsSum;
}

enIsPerfectNumber checkPerfectNum(int num)
{

    if (sumOfDivisors(num) == num)
    {
        return perfectNum;
    }

    else
    {
        return notPerfectNum;
    }
}

void printPerfectNumFrom1ToN(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (checkPerfectNum(i) == perfectNum)
        {
            cout << "\n" << i << "\n";
        }
        
    }
    
}

void printResults(int num)
{
    if (checkPerfectNum(num) == perfectNum)
    {
        cout << endl << num << " Is Perfect Number.";
    }
    
    else
    {
        cout << endl << num << " Is Not Perfect Number.";
    }
    
}

int main()
{
    printPerfectNumFrom1ToN(ReadPositiveNumber("Please Enter Positive Number: "));

    return 0;
}