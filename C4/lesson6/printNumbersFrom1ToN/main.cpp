#include <iostream>
using namespace std;

int readNum()
{
    int n;

    cout << "\nPlease Enter N: ";
    cin >> n;

    return n;
}

bool isNumValid(int n)
{
    return (n >= 1);
}

void printResults(int n)
{
    if (isNumValid(n))
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "\n" << i;
        }
    }

    else
    {
        cout << "Invalid N.";
    }
}

int main()
{
    printResults(readNum());

    return 0;
}