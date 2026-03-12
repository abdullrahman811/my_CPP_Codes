#include <iostream>

using namespace std;

int main() {

    unsigned short int mark1, mark2, mark3, sum;
    
    
    cout << "Enter Mark1 :" << endl;
    cin >> mark1;

    cout << "Enter Mark2 :" << endl;
    cin >> mark2;

    cout << "Enter Mark3 :" << endl;
    cin >> mark3;

    cout << "The average is : " << (mark1 + mark2 + mark3)/3 << endl;
    return 0;
}