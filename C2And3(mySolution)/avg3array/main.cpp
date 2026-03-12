#include <iostream>
using namespace std;

void readData(int grade[3]){
    cout << "Please Enter Grade1: ";
    cin >> grade[0];
    cout << endl;

    cout << "Please Enter Grade2: ";
    cin >> grade[1];
    cout << endl;

    cout << "Please Enter Grade3: ";
    cin >> grade[2];
    cout << endl;
}

float processData(int grade[3]){
    return static_cast<float>(grade[0] + grade[1] + grade[2])/3;    
}

void printData(int grade[3]){
    cout << "The Average Of The Three Marks Is: " << processData(grade) << endl;
}

int main(){

    int grade[3];

    readData(grade);
    processData(grade);
    printData(grade);
    return 0;
}