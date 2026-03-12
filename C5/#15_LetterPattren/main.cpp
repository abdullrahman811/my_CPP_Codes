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

void printLetterPattren(int num)
{
    for (int i = 'A'; i <= 'A' + num - 1; i++)
    {
        cout << "\n";

        for (int j = 1; j <= i - 'A' + 1; j++)
        {
            cout << char(i);
        }
        
    }
    
}

int main()
{

    printLetterPattren(readPositiveNumber("Please Enter Positive Number: "));

    return 0;
}