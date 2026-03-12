#include <iostream>
// using namespace std;

int main()
{
    int n, i, sum;
    i = n = sum = 0;

    std::cout << "Please Enter N: ";
    std::cin >> n;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }

        i++;
    }

    std::cout << std::endl << sum << std::endl;

    return 0;
}