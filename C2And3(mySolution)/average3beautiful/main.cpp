#include <iostream>
using namespace std;

struct marks{
    int mark;
};

struct avg{
    float avg;
};

void readData(marks &mark1, marks &mark2, marks &mark3){
    cout << "Please Enter Mark1: " << endl;
    cin >> mark1.mark;

    cout << "Please Enter Mark2: " << endl;
    cin >> mark2.mark;

    cout << "Please Enter Mark3: " << endl;
    cin >> mark3.mark;
}

void processData(marks &mark1, marks &mark2, marks &mark3, avg &aveg){
    aveg.avg = static_cast<float>(mark1.mark + mark2.mark + mark3.mark)/3;
}

void printData(avg &aveg){
    cout << "The Average Of The Three Marks Is: " << aveg.avg << endl;

}

int main(){

    marks x, y, z;
    avg a;

    readData(x, y, z);
    processData(x, y, z, a);
    printData(a);

    return 0;
}