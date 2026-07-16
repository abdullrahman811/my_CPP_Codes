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
            printf("%0*d\t", 2, matrix[i][j]);
        }
        
        cout << "\n";
    }
}

int maxNumInMatrix(int mat[3][3])
{
    int maxNum = mat[0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            maxNum = max(mat[i][j], maxNum);
        }
    }
    
    return maxNum;
}

int minNumInMatrix(int mat[3][3])
{
    int minNum = mat[0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            minNum = min(mat[i][j], minNum);
        }
    }
    
    return minNum;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    fillMatrixInRandoms(matrix);

    printMatrix(matrix);
    
    cout << "min=" << minNumInMatrix(matrix) << " max=" << maxNumInMatrix(matrix) << '\n';
    
    return 0;
}