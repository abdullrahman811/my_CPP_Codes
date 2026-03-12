#include <iostream>
using namespace std;

short readAge()
{
    short age;

    cout << "Please Enter Age: ";
    cin >> age;

    return age;
}

bool validateAge(short age)
{
    return (age >= 18 && age <= 45);
}

void readUntilTrue(bool a)
{
    while (!a)
    {
        cout << "Invalid Age!\n\n";
        a = readAge();

        if (a)
        {
            cout << "\nValid Age.";
            break;
        }
    }
}

int main()
{
    readUntilTrue(validateAge(readAge()));

    return 0;
}