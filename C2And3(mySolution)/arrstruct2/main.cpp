#include <iostream>
using namespace std;

struct stInfo{
    string name;
    string id;
    int kills;
    int deaths;
    int matches;
};

void readOne(stInfo& x){
    cout << endl << "_________________________________" << endl;
    
    cout << "Please Enter Name : " << endl;
    cin >> x.name;

    cout << "Please Enter ID : " << endl;
    cin >> x.id;
    
    cout << "Please Enter Kills : " << endl;
    cin >> x.kills;

    cout << "Please Enter Deaths : " << endl;
    cin >> x.deaths;

    cout << "Please Enter Matches : " << endl;
    cin >> x.matches;

    cout << endl << "_________________________________" << endl;
}

void printOne(stInfo x){
    cout << endl << "*********************************" << endl;

    
    cout << "Name : " << x.name << endl;
    cout << "ID : " << x.id << endl;
    cout << "Kills : " << x.kills << endl;
    cout << "Deaths : " << x.deaths << endl;
    cout << "Matches : " << x.matches << endl;


    cout << endl << "*********************************" << endl;
}

void read(stInfo ar[10]){
    readOne(ar[0]);
    readOne(ar[1]);
    readOne(ar[2]);
    readOne(ar[3]);
    readOne(ar[4]);
    readOne(ar[5]);
    readOne(ar[6]);
    readOne(ar[7]);
    readOne(ar[8]);
    readOne(ar[9]);
}

void print(stInfo ar[10]){
    printOne(ar[0]);
    printOne(ar[1]);
    printOne(ar[2]);
    printOne(ar[3]);
    printOne(ar[4]);
    printOne(ar[5]);
    printOne(ar[6]);
    printOne(ar[7]);
    printOne(ar[8]);
    printOne(ar[9]);
}

int main(){
    stInfo players[10];

    read(players);
    print(players);

    return 0;
}