#include <iostream>
using namespace std;

void read(char& day){
    cout << "Please Enter The Day: ";
    cin >> day;
}

void process(char day){
    if (day == '1'){
        cout << "Friday";
    }
    else if (day == '2'){
        cout << "Saturday";
    }
    else if (day == '3'){
        cout << "Sunday";
    }
    else if (day == '4'){
        cout << "Monday";
    }
    else if (day == '5'){
        cout << "Tuesday";
    }
    else if (day == '6'){
        cout << "Wednesday";
    }
    else if (day == '7'){
        cout << "Thursday";
    }
    else {
        cout << "Wrong Day";
    }

}

int main(){
    char day;

    read(day);
    process(day);

    return 0;
}