#include <iostream>
using namespace std;

void readDimensions(int &a, int &b){
    cout << "Please Enter Width: \n";
    cin >> a;

    cout << "Please Enter Height: \n";
    cin >> b;
}

int rectangleArea(int a, int b){
    return a * b;
}

void printArea(int area){
    cout << "The Area Is :" << area << "\n";
}

int main(){
    int width, height;
    width = height = 0;

    readDimensions(width, height);
    printArea(rectangleArea(width, height));

    return 0;
}