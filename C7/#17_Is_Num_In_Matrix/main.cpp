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

bool isNumInMatrix(int mat[3][3], int num)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num == mat[i][j])
                return true;
        }   
    }
    
    return false;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3] = {{0, 1, 0}, {1, 5, 0}, {0, 8, 9}};
    int num = 0;

    printMatrix(matrix);
    
    cout << "\nEnter Number To Look For: \n";
    cin >> num;
    
    cout << "\n" << isNumInMatrix(matrix, num);
    
    return 0;
}