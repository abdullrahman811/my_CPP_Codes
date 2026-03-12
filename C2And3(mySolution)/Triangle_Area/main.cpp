#include <iostream>

using namespace std;

int main() {

    int base, height, area;

    cout << "Enter Base And Height Length Seperated By Enter : " << endl;
    cin >> base;
    cin >> height;

    area = 0.5 * base * height;

    cout << "The Area Of The Triangle Is : " << area << endl;

    return 0;
}