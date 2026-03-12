#include <iostream>
using namespace std;

float readNumber(string message)
{
    float num;
    cout << "\n"
         << message;
    cin >> num;

    return num;
}

float sumtill_99()
{
    int counter = 1;
    float sum = 0;
    float num = 0;
    
    do
    {
        num = readNumber("Please Enter Number" + to_string(counter) + " :");
        
        if (num == -99)
        {
            break;
        }

        sum += num;
        counter++;
    }
    while (num != -99);
    return sum;
}

void printSum(float sum)
{
    cout << "\n\tSum = " << sum;
}

int main()
{
    printSum(sumtill_99());
    return 0;
}