#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then calculate the monthly installment amount.
    Input
    5000
    10
    Outputs
    500
*/
int main(){

    // Difiend 
    int LoanAmount;
    int Months;
    int MonthlyInstallmentAmount ;

    // Input
    cout << "Please Enter The Loan Amount : " <<endl;
    cin >> LoanAmount ;

    cout << " How many Months You Need Menths : " <<endl;
    cin >> Months;

    // processing 
    MonthlyInstallmentAmount = LoanAmount / Months ;

    // Output
    cout << " monthly installment amount :  " << MonthlyInstallmentAmount <<endl;
}