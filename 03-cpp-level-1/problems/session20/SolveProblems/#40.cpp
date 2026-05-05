#include <iostream> 
using namespace std;
/*
    Problem:
    A restaurant charges 10% services fee and 16% sales tax.
    Write a program to read a Bill Value and add service fee and sales tax to it, and print the TotalBill on the screen.
    Input
    100
    Outputs
    127.6
*/

    const double servicesfeepart = 0.10;
    const double salestaxpart = 0.16;

    int totalbaill;

    cout<< "Enter the totalBill : "<<endl;
    cin>> totalbaill;

    totalbaill = srvicesfeepart + salestaxpart ;

    cout <<"totalpart =  "<< totalbaill<<endl;




int main(){

    const double SERVICES_FEE_PART = 0.10; // 10%
    const double SALES_TEX_TART = 0.16; // 16%

    double BillValue ; 

    cout << "Enter The BillValue : " <<endl;
    cin>> BillValue;

    double BillWithServicesFee = BillValue * (1 + SERVICES_FEE_PART ); // 1 = معادلة (0.10 + 100)

    double BillTotal = BillWithServicesFee *(1 + SALES_TEX_TART); // 1 = معادلة (0.16 + 100)


    cout << BillTotal <<endl; // Print BillTotal



    
    
}