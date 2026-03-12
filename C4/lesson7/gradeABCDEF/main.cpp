#include <iostream>
using namespace std;

float readMarkInRange(float &mark)
{
    do
    {
        cout << "Please Enter mark: \n";
        cin >> mark;
    } while (!(mark > 0 && mark < 100));

    return mark;
}

char chMark(float mark)
{
    if (mark >= 90)
    {
        return 'A';
    }

    else if (mark >= 80)
    {
        return 'B';
    }

    else if (mark >= 70)
    {
        return 'C';
    }

    else if (mark >= 60)
    {
        return 'E';
    }

    else if (mark >= 50)
    {
        return 'D';
    }

    else
    {
        return 'F';
    }
}

void printMark(char mark)
{
    cout << "\nYour Mark Is: " << mark;
}

int main()
{
    float mark = 0;

    printMark(chMark(readMarkInRange(mark)));

    return 0;
}