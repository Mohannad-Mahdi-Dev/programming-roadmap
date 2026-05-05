#include <iostream>
#include <cmath>
using namespace std;
/*
Problem:
    
    Write a program to calculate circle area through diameter, then print it on the screen.
    The use should enter:
    D
    Example Inputs:
    10
    Outputs ->
    78.54
*/
int main(){
    
    int D ;
    double   PI = 3.14;

    cout << "Please Enter The circle area : " <<endl;
    cin >> D;

    double Area = (PI * pow(D,2)) / 4 ;

    cout << " Area = " << Area <<endl;
    cout << " Area = " << ceil(Area) <<endl;

}