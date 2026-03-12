#include <iostream>
#include <cmath>

using namespace std;

float area(float a, float b, float c){

    float p, area, lower, upper, line;

    p = (a + b + c)/2;

    lower = 4 * sqrt( p * (p - a) * (p - b) * (p - c) );

    upper = a * b * c ;

    line = (upper / lower);

    area = M_PI * pow(line, 2);

    return area;

}

int main(){

    float a, b, c; 

    cout << "Enter A, B, C Of The Arbitary Triangle :\n";
    cin >> a; 
    cin >> b; 
    cin >> c;

    cout << "The Area Is : " << round(area(a, b, c));

    return 0;
}