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

int maxNumber(int A, int B)
{
    int max = (A > B)? A:B ;
    return max;
}

void randomArray(int array[100], int arraySize)
{
    //arraySize = readPositiveNumber("\nEnter Array Elements Number: ");
    
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

void arrayOfSumOf2Arrays(int array1[100], int array2[100], int array3[100], int arrSize1, int arrSize2, int& arrSize3)
{
    arrSize3 = maxNumber(arrSize1, arrSize2);

    for (int i = 0; i < arrSize3; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    
}

void orchestrator()
{
    int array1[100], arraySize;

    int array2[100];

    int array3[100];

    arraySize = readPositiveNumber("\nEnter Array Length: ");

    randomArray(array1, arraySize);
    cout << "\nArray1 Elements: ";
    printArray(array1, arraySize);

    randomArray(array2, arraySize);
    cout << "\nArray2 Elements: ";
    printArray(array2, arraySize);

    arrayOfSumOf2Arrays(array1, array2, array3, arraySize, arraySize, arraySize);
    cout << "\nArray3 Elements(The Sum Of 1 And 2): ";
    printArray(array3, arraySize);
}

int main()
{
    srand((unsigned)time(NULL));

    orchestrator();

    return 0;
}