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

int readNumber(string message)
{
    int num = 0;

    cout << message << endl;
    cin >> num;
    
    return num;
}


bool readBool(string message)
{
    bool boolean = false;

    cout << message;
    cin >> boolean;

    return boolean;
}

void addArrayElement(int array[100], int &arraySize, int numToAdd)
{
    arraySize++;
    array[arraySize - 1] = numToAdd;
}

void semiDynamicArraySize(int array[100], int &arraySize)
{
    bool check = 0;
    do
    {
        addArrayElement(array, arraySize, readNumber("\nPlease Enter Number: "));
        check = readBool("Do You Want To Add More Numbers? (0 For No, 1 For Yes) : ");
    } while (check);
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
    int array[100];
    int arraySize = 0;
    
    semiDynamicArraySize(array, arraySize);

    cout << "\n\n\nArray Length: " << arraySize;

    cout << "\nArray Elements: ";
    printArray(array, arraySize);
}

int main()
{
    maestro();

    return 0;
}