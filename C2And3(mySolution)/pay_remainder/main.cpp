#include <iostream>
using namespace std;

int main(){

    float total, paid, remainder;

    cout << "Enter The Total Bill : \n";
    cin >> total;

    cout << "Enter The Cash Paid : \n";
    cin >> paid;

    remainder = paid - total;

    cout << "The Remainder Is : " << remainder << endl;

    return 0;
}