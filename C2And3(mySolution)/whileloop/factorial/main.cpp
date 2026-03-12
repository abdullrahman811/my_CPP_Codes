#include <iostream>

int main()
{
    int n, factorial, i;
    n = factorial = i = 1;

    std::cout << "Please Enter N: ";
    std::cin >> n;

    while (n < 0)
    {
        std::cout << "Wrong input! Please Enter N again.\n";
        std::cout << "Please Enter N: ";
        std::cin >> n;
    }

    if (n == 0)
    {
        factorial = 1;
        std::cout << factorial;
        return 0;
    }

    while (n > 0 && i <= n)
    {
        factorial *= i;
        i++;
    }

    std::cout << factorial << std::endl;
    return 0;
}