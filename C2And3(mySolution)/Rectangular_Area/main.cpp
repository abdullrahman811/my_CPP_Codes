#include <iostream>

using namespace std;

int area(int width, int height){

    return width * height;

}

int main() {

    unsigned short int width, height;

    cout << "Enter The Width And Height Of A Rectangular Seperated By Enter: \n";
    cin >> width;
    cin >> height;

    

    cout << "The Area Is : " << area(width, height) << endl;
    
    return 0;
}