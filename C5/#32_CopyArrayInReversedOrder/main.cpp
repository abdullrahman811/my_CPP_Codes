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

void copyArrayReversed(int arr1[100], int arr2[100], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
      arr2[i] = arr1[arraySize - 1 - i];
    }
}

void maestro()
{   
  int array[100];

  int fakeArray[100];
  int arraySize = 0;

  randomArray(array, arraySize);
  cout << "\nOriginal Array: ";
  printArray(array, arraySize);


  copyArrayReversed(array, fakeArray, arraySize);
  cout << "\n\nArray after copy: ";
  printArray(fakeArray, arraySize);
}

int main() 
{   
  srand((unsigned)time(NULL));   
  maestro();   
  return 0;
}