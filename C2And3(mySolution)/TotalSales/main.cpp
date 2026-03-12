#include <iostream>
using namespace std;

void read(float& sale){
    cout << "Please Enter Total Sales: ";
    cin >> sale;

}

void process(float sale){
        if (sale >= 1000000){
        cout << sale * 0.01;
    }

    else if (sale >= 500000){
        cout << sale * 0.02;
    }

    else if (sale >= 100000){
        cout << sale * 0.03;
    }

    else if (sale >= 50000){
        cout << sale * 0.05;
    }

    else {
        cout << 0;
    }

}

int main(){
    float sales;

    read(sales);
    process(sales);

    return 0;
}