#include <iostream>
using namespace std;

void readNums(int num[3])
{
    for (short i = 0; i <= 2; i++)
    {
        cout << "Please Enter Number " << i + 1 << " :";
        cin >> num[i];
    }
}

int maxNum(int num[3])
{
    if (num[0] > num[1])
    {
        if (num[0] > num[2])
        {
            return num[0];
        }

        else
        {
            return num[2];
        }
        
    }

    else
    {
        if (num[1] > num[2])
        {
            return num[1];
        }

        else
        {
            return num[2];
        }
    }
}

void printResult(int maxNum)
{
    cout << "\nMax Number Is: " << maxNum;
}

int main()
{
    int nums[3];

    readNums(nums);

    printResult(maxNum(nums));

    return 0;
}