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

void randomArray(int array[100], int arraySize)
{
    
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

short numIndexInArray(int array[100], int arraySize, int numToFind)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == numToFind)
        {
            return i;
        }
    }

    //if loop done without return, then no matches found
    return -1;    
}

bool isNumInArray(int array[100], int arraySize, int numToFind)
{
    return (numIndexInArray(array, arraySize, numToFind) !=  -1);
}

void maestro()
{
    
    int array[100], arraySize, numToFind;

    short numIndex;
    
    arraySize = readPositiveNumber("\nEnter Array Elements Number: ");

    randomArray(array, arraySize);
    
    cout << "\nArray Elements: ";
    
    printArray(array, arraySize);

    numToFind = readPositiveNumber("\n\nEnter Number To Look For: ");
    
    if (isNumInArray(array, arraySize, numToFind))
    {
        cout << "\nNumber Was Found .)";
        
    }
    
    else
    {
        cout << "\nNumber Not Found .(";
    }
    
}

int main()
{
    srand((unsigned)time(NULL));

    maestro();

    return 0;
}