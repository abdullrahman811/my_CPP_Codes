#include <iostream>
using namespace std;

void swapfn(int &a, int &b, int &temp){

    temp = a;
    a = b;
    b = temp;
};

int main(){

    int a, b, temp;

    cout << "Please enter a and b: " << endl;
    cin >> a;
    cin >> b;

    swapfn(a, b, temp);

    cout << "a now is : " << a << endl;
    cout << "b now is : " << b << endl;

    return 0;
}