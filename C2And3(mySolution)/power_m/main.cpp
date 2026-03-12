#include <iostream>
#include <cmath>
using namespace std;

void poM(){

    int n, m, result;

    cout << "Enter The Number And The Power : " << endl;
    cin >> n;
    cin >> m;

    result = round(pow(n, m));

    cout << "The Result Is : " << result;

};

int main() {

    poM();

    return 0;
}