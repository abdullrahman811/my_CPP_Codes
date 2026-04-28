#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter X:";
    cin >> x;

    if (x > 0)
    {
        cout << "\n Positive";
    }

    else if (x < 0)
    {
        cout << "\n Negative";
    }

    else
    {
        cout << "\n Zero";
    }
    
    

    return 0;
}