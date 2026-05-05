/*
    Problem:
    Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
    Input
    20
    50
    Outputs
    30
*/
#include <iostream>
using namespace std ;

// Generic function
int ReadNumber (string Message ){

    int Number ;
    cout << Message <<endl;
    cin >> Number ;

    return Number ;
}

float CalculateRemainder (float Totalbill , float CashPaid) 
{
    return CashPaid -  Totalbill ;
}

void PrintResult ()
{
    float TotalBill = ReadNumber(" Please Enter Total Bill ? ");
    float CashPaid = ReadNumber(" Please Enter CashPaid ? ");

    cout << endl;
    cout << " Total Pill = " << TotalBill << endl;
    cout << " Cash Paid = " << CashPaid << endl;

    cout << "******************\n";
    cout << " Remainder =  " << CalculateRemainder(CashPaid , TotalBill) <<endl;

}
int main(){
    
    PrintResult();
    
    return 0 ;
}