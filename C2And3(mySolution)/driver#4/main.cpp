#include <iostream>
using namespace std;

struct stInfo{
    short age;
    bool license;
};

void read(short& age, bool& drivingLicense){
    cout << "Please Enter Age : ";
    cin >> age;

    cout << endl << "Do You Have Driving License? (0/1) : ";
    cin >> drivingLicense;
}

void process(short age, bool drivingLicense, bool& test){
    if (age >= 21 && drivingLicense)
    {
        test = 1;
    }

    else 
    {
        test = 0;
    }
}

void print(bool test){
    if (test == 1)
    {
        cout << "Hired!";
    }

    else
    {
        cout << "Rejected!\a";
    }
}

int main(){
    stInfo person;
    bool testing;

    read(person.age,person.license);
    process(person.age, person.license, testing);
    print(testing);

    return 0;
}