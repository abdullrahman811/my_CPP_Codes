#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4];
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter Matrix Element: " << i << "," << j << "\n";
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nPrinting: ";
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
            
        }
    }
    cout << "\nSum: " << sum;
    return 0;
}