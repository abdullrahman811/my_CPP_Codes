#include <iostream>
#include <cmath>
using namespace std;

//مثلث متساوي الساقين

float area(float a, float b){

    return M_PI * pow(b, 2)/4 * (static_cast<float>(2*a - b)/(2*a + b));
}

int main() {

    short a, b;
    cout << "Enter a and b :" << endl;
    cin >> a;
    cin >> b;

    cout << "The circle area is : " << floor(area(a, b)) << endl;


    return 0;
}