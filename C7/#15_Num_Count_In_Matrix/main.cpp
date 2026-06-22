#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "../../lib/all.hpp"

using namespace std;
using namespace all;

void fillMatrixInRandoms(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = randomNumber(1, 10);
        }   
    }
}

void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << matrix[i][j] << "\t";
        }
        
        cout << "\n";
    }
}

int countNumInMatrix(int mat[3][3], int num)
{
    int count = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num == mat[i][j])
                count++;
        }   
    }
    
    return count;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];
    int num = 0;

    fillMatrixInRandoms(matrix);

    printMatrix(matrix);
    
    cout << "\nEnter Num To Look For: \n";
    cin >> num;
    
    cout << "\nNum Found (" << countNumInMatrix(matrix, num) << ") times.";

    return 0;
}