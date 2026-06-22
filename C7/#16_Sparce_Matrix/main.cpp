#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

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

int countNumInMatrix(int mat[3][3], int num)
{
    int count = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num == mat[i][j])
                count++;
        }   
    }
    
    return count;
}

bool isSparceMatrix(int mat[3][3], int rows, int cols)
{
    int cells = rows * cols;
    
    return (countNumInMatrix(mat, 0) > (cells / 2));
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3] = {{0, 1, 0}, {1, 5, 0}, {0, 8, 9}};

    printMatrix(matrix);
    
    cout << "\n" << isSparceMatrix(matrix, 3, 3);
    
    return 0;
}