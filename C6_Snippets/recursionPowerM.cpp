#include <iostream>

int num = 1;

int printNtoPo(int base, int po) {
    if (po == 0) {
        return 1;
    }

    else {
        return (base * printNtoPo(base, po - 1));
    }
}

int main()
{
    std::cout << printNtoPo(2, 3);
    
    return 0;
}