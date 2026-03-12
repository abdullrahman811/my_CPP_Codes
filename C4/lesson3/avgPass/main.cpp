#include <iostream>
using namespace std;

enum enResult{ pass, fail };

void readNums(int num[3])
{
    for (int i = 0; i <= 2; i++)
    {
        cout << "\nPlease Enter Number " << i + 1 << " :";
        cin >> num[i];
    }
}

int avg(int num[3])
{
    return (num[0] + num[1] + num[2]) / 3;
}

enResult isPass(int avg)
{
    if (avg >= 50)
    {
        return enResult::pass;
    }

    else {
        return enResult::fail;
    }
    
}

void printResult(enResult result)
{
    if (result == enResult::pass)
    {
        cout << "\nPass";
    }

    else
    {
        cout  << "\nFail";
    }
}

int main()
{
    int num[3];

    readNums(num);
    printResult(isPass(avg(num)));

    return 0;
}