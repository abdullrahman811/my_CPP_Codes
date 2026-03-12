#include <iostream>
#include <cmath>

using namespace std;

float area(short r){

    return M_PI * pow(r, 2);
}

int main() {

    short r;

    cout << "Enter r Of The Circle : \n";
    cin >> r;

    cout << "The Circle Are Is : " << ceil(area(r));

    return 0;
}