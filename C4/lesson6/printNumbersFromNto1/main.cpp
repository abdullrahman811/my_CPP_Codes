#include <iostream>
using namespace std;

int readN()
{
    int n;

    cout << "Please Enter N: ";
    cin >> n;

    return n;
}

void printNto1(int n)
{
    if (n >= 1)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << "\n"
                 << i;
        }
    }

    else
    {
        do
        {
            cout << "Invalid N.\n";
            n = readN();
        } while (n < 1);
    }
}

int main()
{
    printNto1(readN());

    return 0;
}