/*
    Problem:
    A restaurant charges 10% services fee and 16% sales tax.
    Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the
    screen.
    Input
    100
    Outputs
    127.6
*/
#include <iostream>
using namespace std ;

float ReadPositiveNumber (string Message) 
{
    float Number ; 
    cout << Message <<endl;
    cin >> Number ; 

    return Number ; 
}

float TotalBillAfterServiceFeeAndSaleTax(float TotalBill)
{ 
    TotalBill *= 1.1 ;
    TotalBill *= 1.16 ;

    return TotalBill ; 
}
int main(){
    
    float TotalBill = ReadPositiveNumber(" Please Enter a Positive Number ? ");

    cout << "Total Bill = " << TotalBill <<endl;
    cout << " TotalBill After Service Fee and Sale Tax = " << 
    TotalBillAfterServiceFeeAndSaleTax(TotalBill)<<endl;

    return 0 ;
}