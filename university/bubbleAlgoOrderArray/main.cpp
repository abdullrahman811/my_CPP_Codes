#include <iostream>
using namespace std;

int readNumber(string message)
{
    int num;

    cout << message;
    cin >> num;

    return num;
}

void readMatrix(int mat[], int n)
{
    for (int i = 0; i < n; i++)
    {
            string print = "\nEnter Number[";
            print += to_string(i);
            print += "]: ";

            mat[i] = readNumber(print);
    }
}

void bubbleOrder(int mat[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool didSwap = false;
        
        for (int j = 0; j < n - i - 1; j++)
        {

            if (mat[j] > mat[j + 1])
            {
                int temp = mat[j];
                mat[j] = mat[j + 1];
                mat[j + 1] = temp;

                didSwap = true;
            }
        }

        if (!didSwap)
        {
            break;
        }
    }
}

void printMatrix(int mat[], int size)
{
    for (int i = 0; i < size; i++)
    {
        string print = "\n\nNumber[";
        print += to_string(i);
        print += "]: ";

        cout << "\nNumber [" << i << "]: " << mat[i];
    }
}

void maestro()
{
    int size = 6, matrix[size];

    readMatrix(matrix, size);

    bubbleOrder(matrix, size);

    printMatrix(matrix, size);
}

int main()
{
    maestro();
    return 0;
}