#include <iostream>
using namespace std;

void read(float &salary, float &deletePercentage)
{
    cout << "Please Enter full salary: ";
    cin >> salary;

    cout << "Please Enter The Percentage Of Salary To Remove without % sign: ";
    cin >> deletePercentage;

    deletePercentage = deletePercentage / 100;
}

float calculateSalary(float &salary, float deletePercentage)
{
    return salary = salary - deletePercentage * salary;
}

void printSalary(float salary)
{
    cout << "The New Salary Is: " << salary;
}

int main()
{
    float salary;
    float deletePercentage;

    read(salary, deletePercentage);
    printSalary(calculateSalary(salary, deletePercentage));

    return 0;
}