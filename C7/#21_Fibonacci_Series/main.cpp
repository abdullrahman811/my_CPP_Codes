#include <iostream>
#include "../../lib/all.hpp"

using namespace std;
using namespace all;

void printFibonacci(int num)
{
				int prev2 = 0, prev1 = 1, fibNum = 0;
				//cout << "\n" << prev2 << prev1;
				
				for (int i = 1; i <= num; i++) {
								prev2 = prev1;
								prev1 = fibNum;
								fibNum = prev1 + prev2;
								
								cout << fibNum << "\t";
				}
}

int main()
{
				int num = readPositiveNumber("\nEnter A Positive Number: ");
				
				printFibonacci(num);
				
				return 0;
}