#include <iostream>
#include "../lib/all.hpp"

using namespace std;
using namespace all;

int main()
{
    for (int n : {1,2,3,4,5,6,7,8,9})
    {
        cout << n << "\t";
    }

    cout << "\n";

    int arr[5] = {1,2,3,4,5};
    
    for (int m : arr)
    {
        cout <<  m << "\t";
    }
    
    return 0;
}