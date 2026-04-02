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

int oddCountInArray(int arr1[100], int arr1Size)
{
  int odd = 0;

  for (int i = 0; i < arr1Size; i++)
  {
    if (arr1[i] % 2 != 0)
    {
      odd++;
    }
  }

  return odd;
}

void maestro()
{   
  int array[100], arr1Size, odd;
  arr1Size = odd = 0;

  randomArray(array, arr1Size);
  cout << "\nOriginal Array: ";
  printArray(array, arr1Size);


  odd = oddCountInArray(array, arr1Size);

  cout << "\n\nOdds In The Array: " << odd;
}

int main() 
{
  srand((unsigned)time(NULL));
  maestro();   
  return 0;
}
