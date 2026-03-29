#include <iostream>  

using namespace std;

int readPositiveNumber(string message) 
{   
  int num = 0;   
  do   
  {    
    cout << message << endl;     
    cin >> num;
    } while (num <= 0);  
    
    return num;
}

void addArrayElement(int array[100], int &arraySize, int numToAdd)
{
    arraySize++;
    array[arraySize - 1] = numToAdd;
}

int randomNumber(int From, int To) {
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void randomArray(int array[100], int &arraySize)
{ 
  arraySize = readPositiveNumber("\nEnter Array Elements Number: ");    

  for (int i = 0; i < arraySize; i++)  
  {     
    array[i] = randomNumber(1, 100);   
  }
}  

void printArray(int array[100], int arraySize)
{   
  for (int i = 0; i < arraySize; i++) 
  {       
    cout << array[i] << " ";  
  }  
} 

void copyArrayUsingAddArrayElements(int arr1[100], int arr1Size, int arr2[100], int &arr2Size)
{
    for (int i = 0; i < arr1Size; i++)
    {
        addArrayElement(arr2, arr2Size, arr1[i]);
    }   
}

void maestro()
{   
  int array[100], fakeArray[100], arr1Size, fakeSize;
  arr1Size = fakeSize = 0;

  randomArray(array, arr1Size);
  cout << "\nOriginal Array: ";
  printArray(array, arr1Size);


  copyArrayUsingAddArrayElements(array, arr1Size, fakeArray, fakeSize);
  cout << "\n\nArray after copy: ";
  printArray(fakeArray, fakeSize);
}

int main() 
{   
  srand((unsigned)time(NULL));   
  maestro();   
  return 0;
}
