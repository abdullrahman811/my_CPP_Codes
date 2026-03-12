#include <iostream>
using namespace std;

int main()
{

    
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1, x = 65; j <= i; j++)
        {

            std::cout << char(x) << " ";
            x++;
        }

        cout << "\n";
    }

    return 0;
}