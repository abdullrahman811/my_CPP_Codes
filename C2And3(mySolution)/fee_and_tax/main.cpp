#include <iostream>
using namespace std;

int main() {

    float bill, fee, total;

    cout << "Enter Bill Value : \n";
    cin >> bill;

    fee = bill * 1.1;
    total = fee * 1.16; 


    cout << "The Total Bill Is : " << total << endl;

    return 0;
}