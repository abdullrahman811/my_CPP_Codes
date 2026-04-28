#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 7 == 0 && i % 2 == 0)
        {
            cout << "\n" << i;
        }
        
    }
    
    return 0;
}