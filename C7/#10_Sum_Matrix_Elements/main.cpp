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

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    fillMatrixInRandoms(matrix);

    printMatrix(matrix);
    
    cout << "\nMatrix Sum Is: \n" << sumMatrixElements(matrix);

    return 0;
}