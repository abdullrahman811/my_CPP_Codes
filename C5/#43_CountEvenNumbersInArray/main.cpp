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

int evenCountInArray(int arr1[100], int arr1Size)
{
  int even = 0;

  for (int i = 0; i < arr1Size; i++)
  {
    if (arr1[i] % 2 == 0)
    {
      even++;
    }
  }

  return even;
}

void maestro()
{   
  int array[100], arr1Size, even;
  arr1Size = even = 0;

  randomArray(array, arr1Size);
  cout << "\nOriginal Array: ";
  printArray(array, arr1Size);


  even = evenCountInArray(array, arr1Size);

  cout << "\n\nevens In The Array: " << even;
}

int main() 
{   
  maestro();   
  return 0;
}
