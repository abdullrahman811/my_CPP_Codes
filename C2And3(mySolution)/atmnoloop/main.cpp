#include <iostream>
using namespace std;

void read(short& test){
    cout << "Please Enter ATM PIN Code : ";
    cin >> test;
}

void process(short pin, short test, int balance){
    if (pin == test){
        cout << "Balance is : " << balance;
    }

    else {
        cout << "Wrong PIN";
    }

}

int main(){
    int balance;
    short pin, testPin;

    balance = 7500;
    pin = 1234;

    read(testPin);
    process(pin, testPin, balance);
    
    return 0;
}