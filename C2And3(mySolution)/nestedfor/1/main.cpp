#include <iostream>
using namespace std;

int main()
{
    /* My Previous solution
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 10 - i; j >= 1; j--)
            {
                cout << "*";
            }

            cout << "\n";
        }
    */

    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}