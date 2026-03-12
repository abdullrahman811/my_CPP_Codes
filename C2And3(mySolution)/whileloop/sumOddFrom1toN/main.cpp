#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;

    i = 0;
    sum = 0;

    cout << "Please Enter N: ";
    cin >> n;

    while (i <= n)
    {
        if (i % 2 != 0)
        {        
            sum += i;
        }
        
        i++;

    }

    cout << endl << sum;
    


    return 0;
}