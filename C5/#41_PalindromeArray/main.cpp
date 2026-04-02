#include <iostream>  

using namespace std;


void hardCodedArray(int array[100], int &arraySize)
{
  arraySize = 5;
  array[0] = 10;
  array[1] = 20;
  array[2] = 30;
  array[3] = 20;
  array[4] = 10;
  //array[5] = 10;
}

void printArray(int array[100], int arraySize)
{   
  for (int i = 0; i < arraySize; i++) 
  {       
    cout << array[i] << " ";  
  }  
} 

bool isPalindromeArray(int arr1[100], int arr1Size)
{
  for (int i = 0; i < arr1Size / 2; i++)
  {
    if (arr1[i] != arr1[arr1Size - 1 - i])
    {
      return false;
    }
  }

  return true;
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
