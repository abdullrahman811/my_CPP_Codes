#include <iostream>
using namespace std;

struct stPersonalInfo
{

    string name;
    string phone;
    short age;
    string city;
    string country;
    int monthlySalary;
    string gender;
    string status;
};

void readInfo(stPersonalInfo &x)
{

    cout << "Please Enter Name: " << endl;
    getline(cin, x.name);

    cout << "Please Enter Age: " << endl;
    cin >> x.age;

    cout << "Please Enter Country: " << endl;
    cin >> x.country;

    cout << "Please Enter City: " << endl;
    cin >> x.city;

    cout << "Please Enter Phone: " << endl;
    cin >> x.phone;

    cout << "Please Enter Monthly Salary: " << endl;
    cin >> x.monthlySalary;

    cout << "Please Enter Gender: " << endl;
    cin >> x.gender;

    cout << "Please Enter Status: " << endl;
    cin >> x.status;

};

void printInfo(stPersonalInfo x)
{

    cout << "*************************" << endl;
    cout << "Name: " << x.name << endl;
    cout << "Age: " << x.age << endl;
    cout << "Country: " << x.country << endl;
    cout << "City: " << x.city << endl;
    cout << "Phone: " << x.phone << endl;
    cout << "Monthly Salary: " << x.monthlySalary << endl;
    cout << "Yearly Salary: " << x.monthlySalary * 12 << endl;
    cout << "Gender: " << x.gender << endl;
    cout << "Status: " << x.status << endl;
    cout << "*************************" << endl;

};

int main(){

    stPersonalInfo person;
    readInfo(person);
    printInfo(person);

    return 0;
};