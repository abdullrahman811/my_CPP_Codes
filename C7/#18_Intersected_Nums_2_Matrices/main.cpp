#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>

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

vector <int> intersectedNumsIn2Matrices(int mat1[3][3], int mat2[3][3])
{
  vector <int> nums;
  
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          if (isNumInMatrix(mat1, mat2[i][j]))
              nums.push_back(mat2[i][j]);
      }   
  }
  
  return nums;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3] = {{0, 1, 0}, {1, 5, 0}, {0, 8, 9}};
    int mat[3][3] = {{9, 1, 19}, {81, 5, 23}, {0, 85, 19}};
    
    printMatrix(matrix);
    cout << "\n";
    printMatrix(mat);
    
    vector <int> nums = intersectedNumsIn2Matrices(matrix, mat);
    
    for (int &i: nums)
        cout << i << "\t";
       
    return 0;
}