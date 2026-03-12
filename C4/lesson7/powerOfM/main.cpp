#include <iostream>
using namespace std;

int readN(int &n)
{
    cout << "Please Enter N: ";
    cin >> n;

    return n;
}

int readM(int &m)
{
    cout << "Please Enter M: ";
    cin >> m;

    return m;
}

int powerOfM(int m, int n)
{
    int powm = 1;

    for (int i = 1; i <= m; i++)
    {
        powm *= n;
    }

    return powm;
}

void printPowM(int powm)
{
    cout << "\nThe N Power Of M Is: " << powm;
}

int main()
{
    int n, m;
    n = m = 0;

    printPowM(powerOfM(readM(m), readN(n)));
    return 0;
}