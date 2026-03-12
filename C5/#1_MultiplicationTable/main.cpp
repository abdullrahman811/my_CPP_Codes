#include <iostream>
using namespace std;

void printMultiplicationTableHeader()
{
    cout << "\n\n"
         << "\t\t\t Multiplication Table From 1 to 10"
         << "\n\n"
         << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10"
         << "\n"
         << "___________________________________________________________________________________";
}

string columnSeperator(int i)
{
    if (i < 10)
    {
        return "   |  ";
    }

    else
    {
        return "  |  ";
    }
}

void printMultiplicationTable()
{
    printMultiplicationTableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << "\n " << i << columnSeperator(i);

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
    }
}

int main()
{
    printMultiplicationTable();

    return 0;
}