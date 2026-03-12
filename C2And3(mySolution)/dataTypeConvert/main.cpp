#include <iostream>
using namespace std;

int main() {
    
    int i, N1, nn3;
    float f, N3;
    double d, N2;

    string st1, n1, n2, n3;
    st1 = "43.22";
    N1 = 20;
    N2 = 33.5;
    N3 = 55.23;

    n1 = to_string(N1);
    n2 = to_string(N2);
    n3 = to_string(N3);

    /*
    nn3 = N3
    nn3 = (int) N3
    nn3 = int(N3)
    */

    nn3 = int(N3);

    i = stoi(st1);
    f = stof(st1);
    d = stod(st1);

    cout << st1 << endl << i << endl << f << endl << d << endl;

    cout << n1 << endl << n2 << endl << n3 << endl << nn3 << endl;

    return 0;
}