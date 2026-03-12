#include <iostream>
using namespace std;

enum enNumberType { Even, Odd };

int readNumber()
{
    int num;

    cout << "Please Enter Number : ";
    cin >> num;

    return num;
}

enNumberType even(int num)
{
    if (num % 2 == 0)
    {
        return enNumberType::Even;
    }

    else{
        return enNumberType::Odd;
    }
}

void printResult(enNumberType result){
    if (result == enNumberType::Even)
    {
        cout << "\nThe Number Is Even.";
    }

    else{
        cout << "\nThe Number Is Odd.";
    }
    
}

int main()
{

    printResult(even(readNumber()));

    return 0;
}