#include <iostream>
using namespace std;

int main(){

    bool a;

    a = (12 >= 12);

    cout << a << endl;

    a = (12 > 7);

    cout << a << endl;

    a = 8 < 6;

    cout << a << endl;

    a = (8 == 8);

    cout << a << endl;

    a = (12 <= 12);

    cout << a << endl;

    a = (7 == 5);

    cout << a << "\nColumn 1 Done" << endl;

    a = !(12 >= 12);

    cout << a << endl;

    a = !(12 < 7);

    cout << a << endl;

    a = !(8 < 6);

    cout << a << endl;

    a = !(8 == 8);

    cout << a << endl;

    a = !(12 <= 12);

    cout << a << endl;

    a = !(7 == 5);

    cout << a << "\nColumn 2 Done" << endl;

    a = (1 && 1);

    cout << a << endl;

    a = (true && 0);

    cout << a << endl;

    a = (0 || 1);

    cout << a << endl;

    a = (0 || 0);

    cout << a << endl;

    a = !(0);

    cout << a << endl;

    a = !(1 || 0);

    cout << a << "\nColumn 3 Done" << endl;

    a = ((7 == 7) && (7 > 5));

    cout << a << endl;

    a = ((7 == 7) && (7 < 5));

    cout << a << endl;

    a = ((7 == 7) || (7 < 5));

    cout << a << endl;

    a = ((7 < 7) || (7 > 5));

    cout << a << endl;

    a = (!(7 == 7) && (7 > 5));

    cout << a << endl;

    a = ((7 == 7) && !(7 < 5));

    cout << a << "\nColumn 4 Done" << endl;


    return 0;
}