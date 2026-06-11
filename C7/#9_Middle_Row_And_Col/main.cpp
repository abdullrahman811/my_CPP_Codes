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

void printMiddleRow(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%0*d\t", 2, mat[1][i]);
    }
}

void printMiddleCol(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%0*d\t", 2, mat[i][1]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    fillMatrixInRandoms(matrix);

    printMatrix(matrix);

    cout << "\nMiddle Row: \n";
    printMiddleRow(matrix);
    
    cout << "\nMiddle Col: \n";
    printMiddleCol(matrix);

    return 0;
}