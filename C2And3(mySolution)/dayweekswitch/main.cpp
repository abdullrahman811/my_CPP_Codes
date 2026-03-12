#include <iostream>
using namespace std;

enum enWeekDay{ Friday=1, Saturday=2, Sunday=3, Monday=4, Tuesday=5, Wednesday=6, Thursday=7 };

void read(short& wdnum){
    cout << "Please Enter The Number Of The Day: ";
    cin >> wdnum;

}

enWeekDay num2day(short wdnum){
    return (enWeekDay)wdnum;
}

string printDay(enWeekDay weekday){
    switch (weekday) {
        case 1:
            return "Friday";
            break;
        
        case 2:
            return "Saturday";
            break;
        
        case 3:
            return "Sunday";
            break;

        case 4:
            return "Monday";
            break;
        
        case 5:
            return "Tuesday";
            break;

        case 6:
            return "Wednesday";
            break;

        case 7:
            return "Thursday";
            break;

        default:
            return "Wrong Day!";
    }

}

int main(){
    /*short dayNum;


    cout << "Please Enter Day Number: ";
    cin >> dayNum;

    switch (dayNum) {
        case 1:
            cout << "Friday";
            break;
        
        case 2:
            cout << "Saturday";
            break;
        
        case 3:
            cout << "Sunday";
            break;

        case 4:
            cout << "Monday";
            break;
        
        case 5:
            cout << "Tuesday";
            break;

        case 6:
            cout << "Wednesday";
            break;

        case 7:
            cout << "Thursday";
            break;

        default:
            cout << "Wrong Day!";
    }*/
    short wdnum;
    read(wdnum);
    cout << "Is : " << printDay(num2day(wdnum));

    return 0;
}