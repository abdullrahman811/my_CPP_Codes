#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << "Please Enter Positive Number: ";
        cin >> num;
    } while (num <= 0);

    return num;
}

void printNumberPattren(int num)
{
    cout << "\n";

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        
        cout << "\n";
    }
    
}

int main()
{
    printNumberPattren(readPositiveNumber("Enter Positive Number: "));
    return 0;
}