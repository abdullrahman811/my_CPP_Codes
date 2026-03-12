#include <iostream>

using namespace std;

int main(){

    //Var
    short v1;
    cout << "Enter first number :" << endl;
    cin >> v1;

    short v2;
    cout << "Enter second number :" << endl;
    cin >> v2;

    short v3;
    cout << "Enter third number :" << endl;
    cin >> v3;

    short sum = v1 + v2 + v3;

    cout << endl;
    //App
    cout << v1 << " +\n";

    cout << v2 << " +\n";

    cout << v3 << "\n";

    cout << "____________________________\n\n";

    cout << "Total = " << sum << "\n\n\n";




    return 0;
}