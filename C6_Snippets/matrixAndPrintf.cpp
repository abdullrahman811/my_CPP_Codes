#include <iostream>
#include <iomanip>
using namespace std;

void fillTable(int table[10][10])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : arr)
    {
        for (int m : arr)
        {
            table[n - 1][m - 1] = n * m;
        }
    }
}

void printTable(int table[10][10])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : arr)
    {
        for (int m : arr)
        {
            printf(" %0*d", 2, table[n - 1][m - 1]);
        }

        cout << "\n";
    }
}

int main()
{
    int multiplicationTable[10][10];

    fillTable(multiplicationTable);
    printTable(multiplicationTable);

    return 0;
}