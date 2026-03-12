#include <iostream>
using namespace std;

int main()
{
    int n = 0, sum = 0;

    while (n != -99)
    {
        cout << "Please Enter N: ";
        cin >> n;

        if (n != -99)
        {
            sum = sum + n;
        }
    }
    
    cout << sum;
    
    return 0;
}