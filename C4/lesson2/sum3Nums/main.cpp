#include <iostream>
using namespace std;

void readNums(int num[3])
{
    for (int i = 0; i <= 2; i++)
    {
        cout << "Please Enter Number" << i + 1 << " :";
        cin >> num[i];
    }
}

int sumfn(int num[3])
{
    int sum = 0;

    for (int i = 0; i <= 2; i++)
    {
        sum += num[i];
    }

    return sum;
}

void print(int sum)
{
    cout << "\nThe Sum Of The 3 Numbers Is: " << sum;
}

int main()
{
    int num[3];

    readNums(num);

    print(sumfn(num));

    return 0;
}