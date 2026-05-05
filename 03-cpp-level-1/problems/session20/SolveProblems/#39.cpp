#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to read a Total Bill and Cash Paid and calculate the remainder to be paid back.
    Input
    20
    50
    Outputs
    30
*/
int main(){

    float TotalBill ;
    float CashPaid ;

    cout << "Please Enter The TotalBill : " <<endl;
    cin >> TotalBill ;
    
    cout << "Please Enter The CashPaid : " <<endl;
    cin >> CashPaid ;

     short  remainder = TotalBill - CashPaid ;

    cout << remainder <<endl;

}