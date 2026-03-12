#include <iostream>
using namespace std;

int main() {

    int A = 5;

    int B;

    B = ++A;
    cout << B << endl;
    cout << A << endl;

    A = 5;

    B = A++;

    cout << B << endl;
    cout << A << endl;



    return 0;
}