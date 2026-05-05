/*
    Write a program to calcualte circle area along the circumference,
     then print it on the screen.
*/
#include <iostream>
#include <math.h>
using namespace std ;

float ReadCircumference()
{
    float L ;
    cout << "Please Enter Circumference ? \n";
    cin >> L ;
    return L ;
}

float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589793238;
    float Area = pow(L , 2) / (4 * PI) ;

    return Area ;
}

void PrintResult( float Area)
{
    cout << " Circle Area = " << Area <<endl;
}
int main(){
    
    PrintResult(CircleAreaByCircumference(ReadCircumference()));

    return 0 ; 
}