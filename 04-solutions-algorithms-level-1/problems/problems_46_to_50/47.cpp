/*
    Problem:
    Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to
    settle the loan.
    Input
    5000
    500
    Outputs
    10 Months
*/
#include <iostream>
using namespace std ;

float ReadLoanAmount(string Message)
{
    int Number ;

    do{
        cout << Message <<endl;
        cin >> Number ;

    }while(Number < 0);
    

    return Number ; 
}

float TotalMonths (float LoanAmount , float MonthlyPayment) 
{
    return (float) LoanAmount / MonthlyPayment ;
}

int main(){
    
    float LoanAmount = ReadLoanAmount( "Please Enter a LoanAmount ? ");
    float MonthlyInstallmant = ReadLoanAmount("Please Enter you Monthly Installmant ? ");

    cout << " LoanAmount = " << LoanAmount  <<endl;
    cout << " Monthly Payment = " << MonthlyInstallmant <<endl;
    cout << "Total Month to pay " << TotalMonths(LoanAmount , MonthlyInstallmant) <<endl;
    
    return 0;
}