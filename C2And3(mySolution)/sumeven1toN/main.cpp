#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout << "Please Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    
    cout << "The Sum Is : " << sum;

    return 0;
}