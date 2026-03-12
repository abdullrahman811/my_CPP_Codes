#include <iostream>

using namespace std;

int main() {

    int loanAmount, monthsNumber;
    float monthlyAmount;

    cout << "Enter The Loan Amount And The Months Number You Want to Settle The Loan In : \n";
    cin >> loanAmount;
    cin >> monthsNumber;

    monthlyAmount = static_cast<float>(loanAmount) / static_cast<float>(monthsNumber);

    cout << "The Monthly Installment Amount Is : " << monthlyAmount << endl;

    return 0;
}