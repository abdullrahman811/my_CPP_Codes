#include <iostream>

using namespace std;

int main() {

    int num1, num2, temp;

    cout << "Enter First Number: \n";
    cin >> num1;

    cout << "Enter Second Number: \n";
    cin >> num2;

    cout << "\n\n";

    cout << num1 << endl;
    cout << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\n\n";

    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}