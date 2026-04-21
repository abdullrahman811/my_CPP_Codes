#include <iostream>
using namespace std;

int readNumber(string message)
{
    int num;

    cout << message;
    cin >> num;

    return num;
}

void readMatrix(int mat[6][5])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            string print = "\nEnter Number[";
            print += to_string(i);
            print += "][";
            print += to_string(j);
            print += "]: ";

            mat[i][j] = readNumber(print);
        }
    }
}

void multiplyMatrix(int mat[6][5], int k)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] *= k;
        }
    }
}

void printMatrix(int mat[6][5])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            string print = "\n\nNumber[";
            print += to_string(i);
            print += "][";
            print += to_string(j);
            print += "]: ";

            cout << "\nNumber [" << i << "][" << j << "]: " << mat[i][j];
        }
    }
}

void maestro()
{
    int matrix[6][5], k = 0;

    readMatrix(matrix);

    k = readNumber("\nEnter Number To Multiply Matrix With: ");

    multiplyMatrix(matrix, k);

    printMatrix(matrix);
}

int main()
{
    maestro();
    return 0;
}