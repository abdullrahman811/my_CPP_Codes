#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int loanAmount, monthlyPayment;
    float months;

    cout << "Enter The Loan Amount And The Monthly Payment : \n";
    cin >> loanAmount;
    cin >> monthlyPayment;

    months = static_cast<float>(loanAmount) / static_cast<float>(monthlyPayment);

    cout << "The Months Needed To Settle The Loan Is : " << ceil(months) << " Months." << endl;
    return 0;
}