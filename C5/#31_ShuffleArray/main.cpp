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

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void shuffleArray(int array[100], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        swap(array[randomNumber(0, arraySize - 1)], array[randomNumber(0, arraySize - 1)]);
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