#include <iostream>
using namespace std;

void read(short& mark){
    cout << endl << "************************" << endl;

    cout << "Please Enter Mark: ";
    cin >> mark;

    cout << endl << "************************" << endl;
}

bool process(short mark){
    if (mark >=50)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void print(short mark){
    if (process(mark) == true)
    {
        cout << "PASS!" << endl;
    }

    else
    {
        cout << "Fail!" << endl;
    }
}

int main(){
    short marks;

    read(marks);
    process(marks);
    print(marks);
}