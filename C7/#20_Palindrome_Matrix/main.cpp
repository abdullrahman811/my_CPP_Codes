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
            cout << setw(2) << setfill('0') << matrix[i][j] << "\t";
        }
        
        cout << "\n";
    }
}

bool isMatrixPalindrome(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 / 2; j++)
        {
            if (matrix[i][j] != matrix[i][2 - j])
                return false;
        }
    }
    
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3] = {
      {7, 5, 7},
      {3, 3, 3},
      {9, 0, 9}
    };

    //fillMatrixInRandoms(matrix);

    printMatrix(matrix);
    
    cout << endl << isMatrixPalindrome(matrix);

    return 0;
}