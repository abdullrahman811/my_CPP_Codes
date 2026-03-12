#include <iostream>
using namespace std;

void read(short& age){
    
    cout << "Please Enter Age : ";
    cin >> age;

}

void process(short age){
        if (age >= 18 && age <= 45){
        cout << "Valid Age";
    }

    else{
        cout << "Invalid Age";
    }

}

int main(){
    short age;

    read(age);
    process(age);
    return 0;
}