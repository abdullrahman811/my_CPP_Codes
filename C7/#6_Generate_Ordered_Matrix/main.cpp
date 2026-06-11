#include <iostream>
#include <iomanip>

using namespace std;

void printMatrix(int matrix[3][3]);

void fillMatrixOrderedNum(int matrix[3][3]);

int main() {
    
    int matrix[3][3];
    
    fillMatrixOrderedNum(matrix);
    
    printMatrix(matrix);
    return 0;
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

void fillMatrixOrderedNum(int matrix[3][3])
{
    int val = 1;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
              matrix[i][j] = val++;
        }
    }
}