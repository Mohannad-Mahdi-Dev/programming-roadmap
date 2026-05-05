#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to read a Loan Amount and Monthly Payment and calculate how many months you need to settle the loan.
    Input
    5000
    500
    Outputs
    10 Months
*/
int main(){

    int LoanAmount ;
    int MonthlyPayment;

    // Input
    cout << "Enter The LoanAmount : " <<endl;
    cin >> LoanAmount ;
    
    cout << "Enter The MonthlyPayment : " <<endl;
    cin >> MonthlyPayment ;

    // processing 
    
    int Result = LoanAmount / MonthlyPayment ;

    cout << " You Need to settle The loan Is : " << Result  << " Months "<<endl;

}