#include <iostream>
#include <cmath>
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
    Outputs 
    47.124
*/
int main(){
    
    int A ;
    int B ;

    cout << "Enter The circle area : " <<endl;
    cin >> A ;

    cout << "Enter The Isosceles Triangle : " <<endl;
    cin >> B ;

    float PI = 3.14;
    double Area = (PI * ( B * B) / 4) * (2 * A - B) / (2 * A + B);
    
    cout << "Area = " << Area <<endl;
    cout << "Area = " << floor(Area) <<endl; // 47

}