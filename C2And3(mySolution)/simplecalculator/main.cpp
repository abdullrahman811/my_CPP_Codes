#include <iostream>
using namespace std;

void read(int& num1, int& num2, char& op){
    cout << "Please Enter Number1 And The Operation And Number2 : " << endl;
    
    cin >> num1;
    cin >> op;
    cin >> num2;
    

}

void process(int num1, int num2, char op){
    if (op == '+'){
        cout << num1 + num2;
    }

    else if (op == '-'){
        cout << num1 - num2;
    }

    else if (op == '*'){
        cout << num1 * num2;
    }

    else if (op == '/'){
        cout << num1 / num2;
    }
    
    else {
        cout << "Invalid Operation";
    }

}

int main(){
    int num1, num2;
    char op;

    read(num1, num2, op);
    process(num1, num2, op);

    return 0;
}