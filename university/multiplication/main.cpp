#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num;

    do
    {
        cout << message;
        cin >> num;
    } while (num <= 0);

    return num;
}

long long muliplication(int num, int C)
{
    long long multi = 1;

    for (int i = 0; i <= num; i++)
    {
        multi *= (C + i);
    }

    return multi;
}

void printMulti(long long multi)
{
    cout << "\nK = " << multi;
}

int main()
{
    int num = readPositiveNumber("Please Enter N: ");
    int C = readPositiveNumber("Please Enter C: ");

    printMulti(muliplication(num, C));
    return 0;
}