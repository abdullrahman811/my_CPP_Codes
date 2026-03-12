#include <iostream>
using namespace std;

int main() {

    int penny, nickel, dime, quarter, dollar, pennies;
    float dollars;

    cout << "Enter Pennies :\n";
    cin >> penny;
    
    cout << "Enter Nickels :\n";
    cin >> nickel;

    cout << "Enter Dimes : \n";
    cin >> dime;

    cout << "Enter Quarters : \n";
    cin >>  quarter;

    cout << "Enter Dollars : \n";
    cin >> dollar;

    pennies = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    dollars = (float)pennies / 100;

    cout << "The Total Pennies are : " << pennies << endl;
    cout << "The Total Dollars are : " << dollars << endl;


    return 0;
}