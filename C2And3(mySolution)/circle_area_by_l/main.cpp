#include <iostream>
#include <cmath>
using namespace std;

float area(short l){

    return pow(l, 2)/(4 * M_PI);
}

int main() {

    short int l;
    cout << "Enter The Circumference : " << endl;
    cin >> l;


    cout << "The Area Is : " << floor(area(l)) << endl;

    return 0;
}