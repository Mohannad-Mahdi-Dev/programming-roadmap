/*
    Problem:
Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then
calculate the monthly installment amount.
Input
5000
10
Outputs
500
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

float MonthlyInstallment (float LoanAmount , float HowManyMonths) 
{
    return (float) LoanAmount / HowManyMonths ; // Monthly Loan Installments
}

int main(){
    
    float LoanAmount = ReadLoanAmount( "Please Enter a LoanAmount ? ");
    float HowManyMonths = ReadLoanAmount("Pleas how many moths you need to settle the loan ? ");

    cout << " LoanAmount = " << LoanAmount  <<endl;
    cout << " Monthly Payment = " << HowManyMonths <<endl;
    cout << " Monthly Installment " << MonthlyInstallment(LoanAmount , HowManyMonths) <<endl;
    
    return 0;
}