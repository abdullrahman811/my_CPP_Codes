#include <iostream>  
#include <cmath>

using namespace std;

enum enIsPrime
{
    prime = 1,
    notPrime = 2
};

enIsPrime checkPrime(int Number)
{
    if (Number < 2)
        return notPrime;

    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return notPrime;
    }

    return prime;
}

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

void copyPrimeFromArray(int arr1[100], int arr1Size, int arr2[100], int &arr2Size)
{
  for (int i = 0; i < arr1Size; i++)
  {
    if (checkPrime(arr1[i]) == prime)
    {
      addArrayElement(arr2, arr2Size, arr1[i]);
    }
  }   
}

void maestro()
{   
  int array[100], fakeArray[100], arr1Size, fakeSize;
  arr1Size = fakeSize = 0;

  randomArray(array, arr1Size);
  cout << "\nOriginal Array: ";
  printArray(array, arr1Size);


  copyPrimeFromArray(array, arr1Size, fakeArray, fakeSize);
  cout << "\n\nArray after copy: ";
  printArray(fakeArray, fakeSize);
}

int main() 
{   
  srand((unsigned)time(NULL));   
  maestro();   
  return 0;
}
