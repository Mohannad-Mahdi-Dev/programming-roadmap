#include <iostream>
using namespace std;
/*
    Write a program to calculate circle area along the circumference, then print it on the screen.
    The use should enter:
    L
    Example Inputs:
    20
    Outputs 
    31.831
*/
int main(){

    float L;
    float Area;
    float PI = 3.14;
    cout << "Enter The L : " <<endl;
    cin >> L;

    Area = (L * L) / (4 * PI) ;

    cout << Area <<endl;

}