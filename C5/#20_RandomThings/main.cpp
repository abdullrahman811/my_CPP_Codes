#include <iostream>
#include <cstdlib>

using namespace std;

enum enRandomType{ smallLetter = 1, capitalLetter = 2, special = 3, digit = 4 };

int randomNumber(int from, int to)
{
    int ranNum = rand() % (to - from + 1) + from;

    return ranNum;
}

char randomChar(enRandomType type)
{
    switch (type)
    {
    case smallLetter:
        return char(randomNumber(97, 122));
        break;

    case capitalLetter:
        return char(randomNumber(65, 90));
        break;

    case special:
        return char(randomNumber(33, 47));
        break;

    case digit:
        return char(randomNumber(48, 57));
        break;

    default:
        break;
    }

    return '\0';
}

void boss()
{
    cout << "\n" << randomChar(enRandomType::smallLetter)
         << "\n" << randomChar(enRandomType::capitalLetter)
         << "\n" << randomChar(enRandomType::special)
         << "\n" << randomChar(enRandomType::digit);
}

int main()
{
    srand((unsigned)time(NULL));

    boss();

    return 0;
}