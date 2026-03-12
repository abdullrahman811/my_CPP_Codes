#include <iostream>
using namespace std;

enum enResult{ pass, fail };

float readMark()
{
    float mark;

    cout << "Please Enter Mark: ";
    cin >> mark;
    return mark;
}

enResult proccessMark(float mark)
{
    if (mark >= 50)
    {
        return enResult::pass;
    }
    else
    {
        return enResult::fail;
    }
}

void printResults(enResult isPass)
{
    if (isPass == enResult::pass)
    {
        cout << "\nPass";
    }

    else
    {
        cout << "\nFail";
    }
}

int main()
{
    printResults(proccessMark(readMark()));

    return 0;
}