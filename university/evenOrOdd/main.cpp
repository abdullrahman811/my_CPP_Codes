#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "\n\nPlease Enter Number: \n";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "\nEven Number";
    }

    else
    {
        cout << "Odd Number";
    }

    return 0;
}