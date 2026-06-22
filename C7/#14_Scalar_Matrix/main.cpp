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

bool isScalarMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != mat[0][0])
                    return false;
            }
            
            else if (mat[i][j] != 0)
                return false;
        }
    }
    
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3] = { 
      {4, 0, 0},
      {0, 4, 0},
      {0, 0, 4}
     };

    //fillMatrixInRandoms(matrix);

    printMatrix(matrix);
    
    cout << "\n" << isScalarMatrix(matrix);

    return 0;
}