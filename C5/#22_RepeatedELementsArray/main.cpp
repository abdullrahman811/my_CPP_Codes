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

/*
int readArraySize()
{
    int arraySize = readPositiveNumber("Please Enter Array Size: ");
    return arraySize;

}
*/

void readArray(int array[100], int &arraySize)
{
    arraySize = readPositiveNumber("\nEnter Array Elements Number: ");
    
    cout << "\n Enter array elements:";

    for (int i = 0; i < arraySize; i++)
    {
        cout << "\n Element [" << i + 1 << "]: ";
        cin >> array[i];
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

void printArray(int array[100], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    
}

void orchestrator()
{
    int array[100], arraySize;

    readArray(array, arraySize);

    cout << "\nOriginal Array: ";
    
    printArray(array, arraySize);

    int numToCheck = readPositiveNumber("\nEnter Number To Check: ");

    int repeatition = timesRepeatedInArray(array, arraySize, numToCheck);

    cout << "\n" << numToCheck << " Repeated " << repeatition << " Time(s).";

}

int main()
{
    orchestrator();

    return 0;
}