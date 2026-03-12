#include <iostream>
using namespace std;

void readNums(int num[2])
{
    for (int i = 0; i <= 1; i++)
    {
        cout << "\nPlease Enter Number " << i + 1 << " :";
        cin >> num[i];
    }
}

int maxNum(int num[2])
{
    if (num[0] > num[1])
    {
        return num[0];
    }

    else
    {
        return num[1];
    }
}

void printResult(int maxNum)
{
    cout << "\nMax Number Is: " << maxNum;
}

int main()
{
    int num[2];

    readNums(num);

    printResult(maxNum(num));

    return 0;
}