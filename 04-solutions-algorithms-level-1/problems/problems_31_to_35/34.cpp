/*
    Problem:
    Write a program to ask the user to enter:
    • TotalSales 
    The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage
    to use of the following:
    • > 1000,000  Percentage is 1%
    • > 500K to 1M  Percentage is 2%
    • > 100K – 500K  Percentage is 3%
    • > 50K to 100K  Percentage is 5%
    • Otherwise  Percentage is 0%
    Example Inputs:
    110,000
    Outputs
    3,300
*/
#include <iostream>
using namespace std ;

int ReadTotalSale()
{
    int TotalSalce ;
    cout << "Enter The Total Sale ? \n";
    cin >> TotalSalce ;
    return TotalSalce ; 
}

float GetCommissionPercentage(float TotalSale)
{
    if(TotalSale >= 1000000) 
        return 0.01 ;
    else if(TotalSale > 500000 )
        return 0.02 ; 
    else if(TotalSale > 100000 )
        return 0.03 ;
    else if(TotalSale > 50000 )
        return 0.05 ;
    else 
        return 0.00;
}

float CalculateTotalCommission(float TotalSale)
{
    return GetCommissionPercentage(TotalSale) * TotalSale ;
}

int main(){
    
    int TotalSale = ReadTotalSale();

    cout << "Commission Percentage : " << GetCommissionPercentage(TotalSale)<<endl;
    cout << " Total commission = " << CalculateTotalCommission(TotalSale) <<endl;

    return 0;
} 