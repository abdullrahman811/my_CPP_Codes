#include <iostream>
#include <vector>
#include "../../lib/all.hpp"

using namespace std;
using namespace all;

void Fibonacci(int num, vector <int> &fib, int prev1 = 0, int prev2 = 1)
{
	if (fib.size() == num)
    {
        return;
    }

    int tempNum = prev1 + prev2;

    fib.push_back(tempNum);

    Fibonacci(num, fib, tempNum, prev1);
}

void printVector(vector <int> &v)
{
    cout << "\n";

    for (int &i : v)
    {
        cout << i << "\t";
    }
    
}

int main()
{
	int num = readPositiveNumber("\nEnter A Positive Number: ");
    vector <int> fibonacciSeries;

	Fibonacci(num, fibonacciSeries);

    printVector(fibonacciSeries);

	return 0;
}