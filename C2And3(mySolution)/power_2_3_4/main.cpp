#include <iostream>
using namespace std;

void po(){

    short num1, num2, num3, num4;

    cout << "Enter The Number :\n";
    cin >> num1;

    num2 = num1 * num1;
    num3 = num2 * num1;
    num4 = num3 * num1;

    cout << "The number to the power of 2 is : " << num2 << endl;
    cout << "The number to the power of 3 is : " << num3 << endl;
    cout << "The number to the power of 4 is : " << num4 << endl;

}

int main() {

    po();

    return 0;
}