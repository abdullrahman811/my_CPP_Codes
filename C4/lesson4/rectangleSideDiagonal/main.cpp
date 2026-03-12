#include <iostream>
#include <cmath>

using namespace std;

void readData(int &diagonal, int &side){
    cout << "Please Enter Diagnosal: \n";
    cin >> diagonal;

    cout << "Please Enter Side : \n";
    cin >> side;
}

int rectangleArea(int diagonal, int side){
    return side * sqrt((pow(diagonal, 2) - pow(side, 2)));
}

void printArea(int area){
    cout << "\nThe Area Is: " << area;
}

int main() {
    int diagonal, side;

    readData(diagonal, side);
    printArea(rectangleArea(diagonal, side));
    
    return 0;
}
