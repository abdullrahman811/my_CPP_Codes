#include <iostream>
#include "../lib/all.hpp"

using namespace std;
using namespace all;

int main()
{
    int num = readNumber("\nEnter Number: ", "\nEnter A Valid Number: ");

    (num > 0)  ? cout << "\nPositive." :
    (num == 0) ? cout << "\nZero."     :
                 cout << "\nNegative.";

    return 0;
}