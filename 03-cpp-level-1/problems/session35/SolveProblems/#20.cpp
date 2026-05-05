#include <iostream>
#include <cmath>
using namespace std;

double CalculateCircleArea(double A) 
{
    double Area =  ( M_PI * (A*A)) /4 ;

    return Area ; 
}


int main(){

    double A ;

    cin >> A ;
    cout << CalculateCircleArea(A)<<endl;

}