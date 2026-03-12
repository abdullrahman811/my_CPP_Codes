#include <iostream>
using namespace std;

void mySumProcedure(){

    int x, y, sum;

    cout << "Please Enter Number 1: " << endl;
    cin >> x;

    cout << "Please Enter Number 2: " << endl;
    cin >> y;

    cout << "*******************************" << endl;

    sum = x + y;

    cout << "The Sum Is : " << sum << endl;

};

int mySumFunction(){

    int a, b, sum2;

    cout << "Please Enter Number 1: " << endl;
    cin >> b;

    cout << "Please Enter Number 2: " << endl;
    cin >> a;

    cout << "*******************************" << endl;

    sum2 = a + b;

    cout << "The Sum Is : ";
    return sum2;
};

int main() {

    mySumProcedure();
    cout << "\n\n";

    cout << mySumFunction();



    return 0;
}