#include <iostream>

using namespace std;

enum enGender
{
    Male,
    Female
};
enum enStatus
{
    Single,
    Married
};

struct stAddress
{
    string city;
    string country;
};

struct stWork
{
    unsigned long monSal;
    unsigned long long yearSal;
};

struct stPersonalInfo
{
    string name;
    unsigned short age;
    stAddress address;
    stWork financial;
};

struct stPerson
{
    stPersonalInfo info;
    enGender gender;
    enStatus status;
};

int main()
{

    stPerson abdo;

    abdo.gender = enGender::Male;
    abdo.status = enStatus::Single;

    cout << "Enter your name : " << endl;
    cin >> abdo.info.name;

    cout << "Enter your age : " << endl;
    cin >> abdo.info.age;

    cout << "Enter your city : " << endl;
    cin >> abdo.info.address.city;

    cout << "Enter your country :" << endl;
    cin >> abdo.info.address.country;

    cout << "Enter your monthly salary :" << endl;
    cin >> abdo.info.financial.monSal;

    /* cout << "Enter your gender first character :" << endl;
    cin >> gender;

    cout << "Are you married?" << endl;
    cin >> status; */

    abdo.info.financial.yearSal = abdo.info.financial.monSal * 12;

    // Printing

    cout << "******************************" << endl;

    cout << "Name: " << abdo.info.name << endl;

    cout << "Age : " << abdo.info.age << " Years." << endl;

    cout << "City: " << abdo.info.address.city << endl;

    cout << "Country: " << abdo.info.address.country << endl;

    cout << "Monthly Salary: " << abdo.info.financial.monSal << endl;

    cout << "Yearly Salary: " << abdo.info.financial.yearSal << endl;

    cout << "Gender: " << abdo.gender << endl;

    cout << "Married: " << abdo.status << endl;

    cout << "******************************" << endl;

    return 0;
}