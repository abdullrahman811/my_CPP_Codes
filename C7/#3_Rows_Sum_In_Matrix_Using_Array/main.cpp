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
            matrix[i][j] = randomNumber(1, 100);
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

void calcMatrixRowSum(int matrix[3][3], int sums[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sums[i] += matrix[i][j];
        }
    }
}

void printRowSum(int sums[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\nRow " << i + 1 << " Sum Is: " << sums[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3] = {0};
    int sum[3] = {0};

    fillMatrixInRandoms(matrix);

    printMatrix(matrix);

    calcMatrixRowSum(matrix, sum);

    printRowSum(sum);

    return 0;
}