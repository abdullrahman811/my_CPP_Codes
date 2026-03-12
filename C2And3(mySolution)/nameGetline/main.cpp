#include <iostream>
using namespace std;

void myName (){

    string name;
    getline(cin, name);
    cout << name << endl;

}

int main(){

    myName();
    
    return 0;
}