// Math Functions
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    // Sqrt Root  يعطي الجذر 

    double x = 64;
    cout << "Square root value of 64 : " <<  sqrt(x) <<endl; // gives 8 
    cout << "Square root value of 50 : " <<  sqrt(50) <<endl; // gives 7.07107

    // round : rounding Numbers

    cout <<  "Round value of 2.4 : " << round(2.4) << endl; // gives 2
    cout <<  "Round value of 2.5 : " << round(2.5) <<endl; // gives 3
    cout <<  "Round value of 2.7 : " << round(2.7) <<endl; // gives 3

    cout <<  "Sqrt root  value of 50 : " << sqrt(50) << endl; // gives 7.07107
    cout <<  "Round value of sqrt(50) : " << round(sqrt(50)) << endl; // gives 7

    // POW : Power Funciton
    
        int z = 2 ;
        int y = 4 ;

        cout << "Power value : z^y = (2^4) : " << pow(z,y) <<endl; // gives 16
        cout << "Power value : z^y = (4^3) : " <<  pow(4,3) <<endl; // gives 64

        int a = 2 ;

        a = pow(a, 2) ;
        cout << a << endl; // gives 4

    // Ceil & Floor : Ceil & floor Function

        cout << "Ceiling value of 2.9 : " << ceil(2.9) << endl; // gives 3
        cout << "Floor value of 2.9 : " << floor(2.9) << endl; // gives 2

        cout << "Ceiling value of -2.9 : " << ceil(-2.9) <<endl;// gives -2 So -2 > -3
        cout << "Floor value of -2.9 : " << floor(-2.9) <<endl; // gives -3 So -3 < -2

        cout << round(2.1) << endl; // gives 2
        cout << ceil(2.1) << endl; // gives 3
        cout << floor(2.1) << endl; // gives 2

    // abs : Absolute Function

            
    cout << "Absolute value of -10 " <<  abs(-10) <<endl; //gives 10
    cout << "Absolute value of 10 " <<  abs(10) <<endl; //gives 10

    // There are many other math functions:
    // https://en.cppreference.com/w/cpp/header/cmath

    
    return 0;




}
