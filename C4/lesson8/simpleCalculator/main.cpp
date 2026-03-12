#include <iostream>
using namespace std;

enum enOperationType
{
    add = '+',
    subtract = '-',
    multiply = '*',
    divide = '/'
};

float readData(string message)
{
    float num = 0;
    cout << "\n" << message;
    cin >> num;

    return num;
}

enOperationType readOperationType()
{
    char op;

    cout << "Enter Operation Type: " << "\n"
         << "\t(+ or - or * or /): ";

    cin >> op;

    return (enOperationType)op;
}

float calculateResult(int num1, int num2, enOperationType op)
{
    if (op == enOperationType::add)
    {
        return num1 + num2;
    }

    else if (op == enOperationType::subtract)
    {
        return num1 - num2;
    }

    else if (op == enOperationType::multiply)
    {
        return num1 * num2;
    }

    else if (op == enOperationType::subtract)
    {
        return num1 / num2;
    }
}

void printResults(float result)
{
    cout << "\n\t= " << result;
}

int main()
{
    float num1 = readData("Please Enter First Number: ");

    float num2 = readData("Please Enter Second Number: ");

    enOperationType op = readOperationType();

    printResults(calculateResult(num1, num2, op));

    return 0;
}