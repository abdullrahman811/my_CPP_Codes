#include <iostream>

void printMtoN(int M, int N)
{
    
    if (M >= N)
    {
        std::cout << M << "\t";
        
        printMtoN(M - 1, N);
    }
}

int main()
{
    printMtoN(10, 5);
    
    return 0;
}