#include <iostream>
using namespace std;

void readNums(int num[3])
{
    for (int i = 0; i <= 2; i++)
    {
        cout << "\nPlease Enter Number " << i + 1 << " :";
        cin >> num[i];
    }
}

float avg(int num[3])
{
    return static_cast<float>(num[0] + num[1] + num[2]) / 3;
}

void printResult(float avg){
    cout << "\nThe Average Is: " << avg;
}

int main()
{
    int num[3];

    readNums(num);
    printResult(avg(num));

    return 0;
}