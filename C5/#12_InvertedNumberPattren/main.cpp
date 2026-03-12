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

void printInvertedPattren(int num)
{
    cout << "\n";
    
    for (int i = num; i >= 1; i--)
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
    printInvertedPattren(readPositiveNumber("Please Enter Number: "));
    return 0;
}