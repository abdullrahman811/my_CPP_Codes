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

int randomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArray1ToN(int array[100], int arraySize, int N)
{
    for (int i = 0; (i < arraySize)&&(i < N); i++)
    {
        array[i] = i + 1;
    }
}

void copyArray(int arr1[100], int arr2[100], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
      arr2[i] = arr1[i];
    }
}

int timesRepeatedInArray(int array[100], int arraySize, int numToCheck)
{
    int repeatition = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (numToCheck == array[i])
        {
            repeatition++;
        }
    }
    
    return repeatition;
}

void fillArrayWith0(int arr[100], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        arr[i] = 0;
    }
}

void shuffleArray(int array[100], int arraySize)
{
    int temp[100];
    
    copyArray(array, temp, arraySize);
    fillArrayWith0(array, arraySize);
    
    for (int i = 0; i < arraySize; i++)
    {
        int tempRandomNum = randomNumber(0, arraySize);
        
        if (timesRepeatedInArray(array, arraySize, temp[tempRandomNum]) == 0)
        {
            array[i] = temp[tempRandomNum];
        }

        else
        {
            i--;
        }
        
    }
    
}

void printArray(int array[100], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    
}

void maestro()
{
    int arr[100], arraySize;
    int N = arraySize = readPositiveNumber("Enter N Less Than 100: ");

    fillArray1ToN(arr, arraySize, N);
    cout << "\nArray: ";
    printArray(arr, arraySize);

    shuffleArray(arr, arraySize);
    cout << "\n\nShuffled Array: ";
    printArray(arr, arraySize);
}

int main()
{
    srand((unsigned)time(NULL));

    maestro();

    return 0;
}