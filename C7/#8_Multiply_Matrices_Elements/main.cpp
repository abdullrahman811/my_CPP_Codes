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
            //cout << setw(3) << matrix[i][j] << "\t";
            printf("%0*d\t", 2, matrix[i][j]);
        }
        
        cout << "\n";
    }
}

void multiply2MatricesElements(int mat1[3][3], int mat2[3][3], int result[3][3])
{
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int mat1[3][3], mat2[3][3], result[3][3];

    fillMatrixInRandoms(mat1);
    fillMatrixInRandoms(mat2);


    cout << "\nMatrix 1: \n";   
    printMatrix(mat1);

    cout << "\nMatrix 2: \n";
    printMatrix(mat2);

    
    multiply2MatricesElements(mat1, mat2, result);
    
    cout << "\nMultiply Result: \n";
    printMatrix(result);

    return 0;
}