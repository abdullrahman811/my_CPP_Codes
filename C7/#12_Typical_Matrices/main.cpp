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

bool areMatricesTypical(int mat1[3][3], int mat2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //(mat1[i][j] == mat2[i][j]) ? continue : return false;
            if (mat1[i][j] != mat2[i][j])
                return false;
        }
    }
    
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3], anotherOne[3][3];

    fillMatrixInRandoms(matrix);
    fillMatrixInRandoms(anotherOne);
    
    cout << "\nMatrix One: \n";
    printMatrix(matrix);
    
    cout << "\nMatrix Two: \n";
    printMatrix(anotherOne);
    
    cout << areMatricesTypical(matrix, anotherOne);

    return 0;
}