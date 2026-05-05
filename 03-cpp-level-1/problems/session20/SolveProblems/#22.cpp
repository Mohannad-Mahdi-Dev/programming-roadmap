#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to calculate circle area Inscribed in an Isosceles Triangle,
    then print it on the screen.
    The use should enter:
    a
    b
    Example Inputs:
    20
    10
    Outputs ->
    47.124
*/
int main(){

    float a, b ;
    float PI = 3.14 ;

    cout << "Enter The A : " << endl;
    cin >> a ;
    
    cout << "Enter The B : " << endl;
    cin >> b ;

    float Area = (PI *(b * b)) / 4 * ((2* a-b)/ (2* a+b)) ;

    cout << Area <<endl;


}