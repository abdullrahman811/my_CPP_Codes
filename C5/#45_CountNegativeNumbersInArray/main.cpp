#include <iostream>  

using namespace std;

int readnegativeNumber(string message) 
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
  arraySize = readnegativeNumber("\nEnter Array Elements Number: ");    

  for (int i = 0; i < arraySize; i++)  
  {     
    array[i] = randomNumber(-100, 100);   
  }
}  

void printArray(int array[100], int arraySize)
{   
  for (int i = 0; i < arraySize; i++) 
  {       
    cout << array[i] << " ";  
  }  
} 

int negativeCountInArray(int arr1[100], int arr1Size)
{
  int negative = 0;

  for (int i = 0; i < arr1Size; i++)
  {
    if (arr1[i] <= 0)
    {
      negative++;
    }
  }

  return negative;
}

void maestro()
{   
  int array[100], arr1Size, negative;
  arr1Size = negative = 0;

  randomArray(array, arr1Size);
  cout << "\nOriginal Array: ";
  printArray(array, arr1Size);


  negative = negativeCountInArray(array, arr1Size);

  cout << "\n\nNegatives In The Array: " << negative;
}

int main() 
{
  srand((unsigned)time(NULL));
  maestro();   
  return 0;
}
