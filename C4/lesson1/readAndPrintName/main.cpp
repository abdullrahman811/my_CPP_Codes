#include <iostream>
using namespace std;

string readName(){
    string fullName;


    cout << "Please Enter Name: ";
    getline(cin, fullName);
    return fullName;
}

void printName(string name){
    cout << "\nYour Name Is: " << name;
}

int main(){

    printName(readName());

    return 0;
}