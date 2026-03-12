#include <iostream>
using namespace std;

int main(){
    short grade;
    cout << "Please Enter Grade: ";
    cin >> grade;

    if (grade >= 90){
        cout << "A";
    }

    else if (grade >= 80){
        cout << "B";
    }

    else if (grade >= 70){
        cout << "C";
    }

    else if (grade >= 60){
        cout << "D";
    }

    else if (grade >= 50){
        cout << "E";
    }

    else {
        cout << "F";
    }

    return 0;
}