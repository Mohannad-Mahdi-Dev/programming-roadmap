#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to calculate circle area through diameter,
    then print it on the screen.
    Rules : Area= (13.14 * d*d) / 4
    The use should enter:
    D
    Example Inputs:
    10
    Outputs 
    78.54
*/
int main(){

    float d ;
    float PI = 3.14;

    cout << "Pleas Enter The D : " <<endl;
    cin >> d;

    float Area = (PI * d*d) /4 ;

    cout << Area <<endl;


    

}