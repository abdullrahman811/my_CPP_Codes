#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << message << "\n";
        cin >> num;
    } while (num <= 0);

    return num;
}

void printInvertedLetterPattren(int num)
{
    cout << "\n";
    
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        
        cout << "\n";
    }
    
}

int main()
{
    printInvertedLetterPattren(readPositiveNumber("Please Enter Number: "));
    return 0;
}