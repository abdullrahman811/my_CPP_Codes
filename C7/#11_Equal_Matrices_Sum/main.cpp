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

int sumMatrixElements(int matrix[3][3])
{
    int sum = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           sum += matrix[i][j]; 
        }
    }
    
    return sum;
}

bool areMatricesEqual(int mat1[3][3], int mat2[3][3])
{
    int sum1 = sumMatrixElements(mat1);
    int sum2 = sumMatrixElements(mat2);
    
    return (sum1 == sum2);
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3], mat[3][3];

    fillMatrixInRandoms(matrix);
    fillMatrixInRandoms(mat);

    cout << "\nMatrix One: \n";
    printMatrix(matrix);
    
    cout << "\nMatrix Two: \n";
    printMatrix(mat);
    
    (areMatricesEqual(matrix, mat))? cout << "\nEqual." : cout << "\nNot Equal.";
    
    return 0;
}