#include <iostream>
#include <cmath>
using namespace std;

float area(float sideLength, float diagnosal){

    return sideLength * sqrt(pow(diagnosal, 2) - pow(sideLength, 2)) ;
}

int main(){

    float a, b;

    cout << "Enter Diagnosal :\n";
    cin >> a;

    cout << "Enter Side Length :\n";
    cin >> b;

    cout << "The Area Of The Rectangular Is : " << area(b, a);



    return 0;
}