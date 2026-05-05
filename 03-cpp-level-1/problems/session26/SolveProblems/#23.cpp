#include <iostream>
#include <cmath>
using namespace std;
/*
    Problem:
    Write a program to calculate circle area circle described around an arbitrary triangle,
    then print it on the screen.
    The use should enter:
    a
    b
    C
    Example Inputs:
    5
    6
    7
    Outputs ->
    40.088
*/
int main(){
    
    double  a ;
    double  b ;
    double c ;

    cout << "Enter The a : " <<endl;
    cin >> a ;
    
    cout << "Enter The b : " <<endl;
    cin >> b ;
    
    cout << "Enter The c : " <<endl;
    cin >> c ;

    float PI = 3.14;
    double p = (a + b + c) / 2;
    double T = (a * b * c) / (4 * sqrt(p*(p-a)*(p-b)*(p-c))); 
     T = T * T ; // power 2
    double Area = PI * T;

    //cout << p <<endl;
    cout << "Area = " << Area <<endl;
    cout << "Area = " << round(Area) <<endl;

}