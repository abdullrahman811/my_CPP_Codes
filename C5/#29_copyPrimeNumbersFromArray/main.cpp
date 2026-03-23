#include <iostream>
#include <cmath> 
using namespace std;

enum enIsPrime
{
    prime = 1,
    notPrime = 2
};


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

int randomNumber(int From, int To) {
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void randomArray(int array[100], int &arrSize1)
{ 
  arrSize1 = readPositiveNumber("\nEnter Array Elements Number: ");    

  for (int i = 0; i < arrSize1; i++)  
  {     
    array[i] = randomNumber(1, 100);   
  }
}  

void printArray(int array[100], int arrSize1)
{   
  for (int i = 0; i < arrSize1; i++) 
  {
    cout << array[i] << " ";  
  }  
}

void copyPrimeFromArray(int arr1[100], int arr2[100], int arrSize1, int &arrSize2)
{
    int arrSizeTemp = 0;

    for (int i = 0; i < arrSize1; i++)
    {
        if (checkPrime(arr1[i]) == prime)
        {
            arr2[arrSizeTemp] = arr1[i];
            arrSizeTemp++;
        }
    }
    arrSize2 = arrSizeTemp;
}

void maestro()
{   
  int array[100];

  int fakeArray[100];
  int arrSize1 = 0; 
  int arrSize2 = 0;

  randomArray(array, arrSize1);
  cout << "\nOriginal Array: ";
  printArray(array, arrSize1);


  copyPrimeFromArray(array, fakeArray, arrSize1, arrSize2);
  cout << "\n\nArray after copy: ";
  printArray(fakeArray, arrSize2);
}

int main() 
{   
  srand((unsigned)time(NULL));   
  maestro();   
  return 0;
}
