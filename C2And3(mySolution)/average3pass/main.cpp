#include <iostream>
using namespace std;

void readOne(int& mark){
    cin >> mark;
}

void read(int mark[3]){
    cout << "\nPlease Enter Mark1 : ";
    readOne(mark[0]);

    cout << "\nPlease Enter Mark2 : ";
    readOne(mark[1]);

    cout << "\nPlease Enter Mark3 : ";
    readOne(mark[2]);
    cout << endl;
}

float processAverage(int mark[3]){
    return static_cast<float>(mark[0] + mark[1] + mark[2])/3;
}

void processSuccess(int mark[3]){
    if (processAverage(mark) >= 50){
        cout << "\nPASS!\n";
    }

    else {
        cout << "\nFail!\n";
    }
}

void print(int mark[3]){
    cout << "The Average Is : " << processAverage(mark) << endl;

    processSuccess(mark);

}

int main(){
    int mark[3];

    read(mark);

    print(mark);

    return 0;
}