#include <iostream>
using namespace std;

struct name{
    string firstName;
    string lastName;
};

name readData(){
    name Name;
    
    cout << "\nPlease Enter First Name: \n";
    cin >> Name.firstName;

    cout << "\nPlease Enter Last Name: \n";
    cin >> Name.lastName;

    return Name;
}

string fullName(name name){
    return name.firstName + " " + name.lastName;
}

void printData(string fullName){
    cout << "\nYour Full Name Is: " << fullName;
}

int main(){

    printData(fullName(readData()));

    return 0;
}