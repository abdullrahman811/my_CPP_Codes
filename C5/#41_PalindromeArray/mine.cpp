#include <iostream>  

using namespace std;


void hardCodedArray(int array[100], int &arraySize)
{
  arraySize = 6;
  array[0] = 10;
  array[1] = 20;
  array[2] = 30;
  array[3] = 30;
  array[4] = 20;
  array[5] = 10;
}

void printArray(int array[100], int arraySize)
{   
  for (int i = 0; i < arraySize; i++) 
  {       
    cout << array[i] << " ";  
  }  
} 

void copyArrayReversed(int arr1[100], int arr2[100], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
      arr2[i] = arr1[arraySize - 1 - i];
    }
}

bool isSameArray(int arr1[100], int arr1Size, int arr2[100], int arr2Size)
{
  if (arr1Size != arr2Size)
  {
    return false;
  }

  for (int i = 0; i < arr1Size; i++)
  {
    if (arr1[i] != arr2[i])
    {
      return false;
    }
  }
  
  return true;
}

bool isPalindromeArray(int arr1[100], int arr1Size)
{
  int reversedArray[arr1Size];

  copyArrayReversed(arr1, reversedArray, arr1Size);

  return isSameArray(arr1, arr1Size, reversedArray, arr1Size);
}

void maestro()
{   
  int array[100], arr1Size;
  arr1Size = 0;

  hardCodedArray(array, arr1Size);
  cout << "\nOriginal Array: ";
  printArray(array, arr1Size);

  if (isPalindromeArray(array, arr1Size))
  {
    cout << "\n\nYes.";
  }
  
  else
  {
    cout << "\n\nNo.";
  }
}

int main() 
{   
  srand((unsigned)time(NULL));   
  maestro();   
  return 0;
}
