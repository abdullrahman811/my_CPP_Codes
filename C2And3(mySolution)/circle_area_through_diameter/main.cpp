#include <iostream>
#include <cmath>
using namespace std;

float area(short diameter){

    return M_PI * pow(diameter, 2) /4;
}

int main() {

    short int diameter;

    cout << "Enter Diameter :" << endl;
    cin >> diameter;

    cout << "The Area Of The Circle Is : " << ceil(area(diameter)) << endl;


    return 0;
}