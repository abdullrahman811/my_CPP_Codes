#include <iostream>
using namespace std;

int readNum()
{
    int num;

    cout << "Please Enter Number: ";
    cin >> num;

    return num;
}

void printReversed(int num)
{
    string reversing = to_string(num);

    int i = reversing.length() - 1;

    while (i >= 0)
    {
        cout << reversing[i] << "\n";

        i--;
    }
    
}

int main()
{
    printReversed(readNum());

    return 0;
}