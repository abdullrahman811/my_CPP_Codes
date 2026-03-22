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

int maxNumber(int A, int B)
{
    int max = (A > B)? A:B ;
    return max;
}

int maxNumberArray(int arr[100], int arraySize)
{
    int testMax = 0;

    for (int i = 0; i < arraySize; i++)
    {
        testMax = maxNumber(arr[i], testMax);
    }

    return testMax;
    
}

void orchestrator()
{
    int array[100], arraySize;

    randomArray(array, arraySize);

    cout << "\nArray Elements: ";
    
    printArray(array, arraySize);

    cout << "\nMax Number: " << maxNumberArray(array, arraySize);
}

int main()
{
    srand((unsigned)time(NULL));

    orchestrator();

    return 0;
}