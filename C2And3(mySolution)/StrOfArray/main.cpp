#include <iostream>
using namespace std;

struct stInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void read1(stInfo &x)
{
    cout << endl
         << "______________________________" << endl;

    cout << "Please Enter First Name : ";
    cin >> x.firstName;

    cout << "Please Enter Last Name : ";
    cin >> x.lastName;

    cout << "Please Enter Age : ";
    cin >> x.age;

    cout << "Please Enter Phone Number : ";
    cin >> x.phone;

    cout << endl
         << "______________________________" << endl;
}

void print1(stInfo x)
{
    cout << "******************************" << endl;
    cout << "First Name : " << x.firstName << endl;
    cout << "Last Name : " << x.lastName << endl;
    cout << "Age : " << x.age << endl;
    cout << "Phone : " << x.phone << endl;
    cout << "******************************" << endl;
}

void read2(stInfo x[100], short &length)
{
    // read1(x[0]);
    // read1(x[1]);
    cout << "Please Enter The Number Of Persons: ";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        read1(x[i]);
    }
}

void print2(stInfo x[100], short length)
{
    // print1(x[0]);
    // print1(x[1]);
    for (int i = 0; i <= length - 1; i++){
        cout << "\nPerson[" << i + 1 << "]\n";
        print1(x[i]);
    }
}

int main()
{
    short length = 0;
    stInfo person[100];

    read2(person, length);
    print2(person, length);

    return 0;
}