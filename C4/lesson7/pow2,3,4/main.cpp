#include <iostream>
using namespace std;

int readnum(int &num)
{
    cout << "Please Enter Number: ";
    cin >> num;

    return num;
}

void pow234(int num)
{
    int pow2 = num * num;
    int pow3 = pow2 * num;
    int pow4 = pow3 * num;
    
    cout << "\nThe Power Of 2 Is: " << pow2;
    cout << "\nThe Power Of 3 Is: " << pow3;
    cout << "\nThe Power Of 4 Is: " << pow4;
}

int main()
{
    int n = 0;

    pow234(readnum(n));
    
    return 0;
}