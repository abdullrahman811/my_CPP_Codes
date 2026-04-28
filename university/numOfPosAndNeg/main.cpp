#include <iostream>
using namespace std;

int main()
{
    int x, num;
    int pos = 0, neg = 0;

    cout << "\nEnter Num Of Elemnts:";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        cout << "\nEnter Number:";
        cin >> num;

        if (num > 0)
        {
            pos++;
        }

        else
        {
            neg++;
        }
        
        cout << "\nPositive: " << pos;
        cout << "\nNegative: " << neg;
    }
    

    return 0;
}