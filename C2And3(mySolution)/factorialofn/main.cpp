#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial = 1;

    cout << "Please Enter N: ";
    cin >> n;

    for (int i = n + 1; i >= 1; i--)
    {
        factorial *= i;
    }

    cout << factorial;

    return 0;
}