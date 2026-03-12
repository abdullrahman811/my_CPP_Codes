#include <iostream>
using namespace std;

void read(int& n){

    cout << "Please Enter n: ";
    cin >> n;

}

bool validate(int n){
    if (n < 1){
        cout << "Number Must Be Negative!";
        return false;
    }
    else{
        return true;
    }

}

int sumOdd(int n, int& sum){
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0){
            sum += i;
        }
    }
    return sum;


}

int main(){
    int n;
    int sum = 0;

    read(n);
    if (validate(n)){
    cout << "The Result Is : " << sumOdd(n, sum);}

    return 0;
}