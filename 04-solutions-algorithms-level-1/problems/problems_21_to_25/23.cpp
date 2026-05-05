/*
    Write a program to calculate circle area circle described around an arbitrary triangle,
    than print it on the screen.
*/
#include <iostream>
#include <math.h>
using namespace std ;

void ReadTriangleData(float& A ,float& B ,float& C)
{
    cout << "Enter Triangle side A ? \n";
    cin >> A ;
    
    cout << "Enter Triangle base B ? \n";
    cin >> B ;
    
    cout << "Enter Triangle side C ? \n";
    cin >> C ;
}

float CircleAreaByATriangle(float& A ,float& B ,float& C)
{
    const float PI = 3.141592653589793238;
    float P ;
    P = (A + B + C) / 2 ;

    float T;
    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = PI * pow(T , 2);

    return Area ;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area <<endl; 
}
int main(){
    
    float A , B , C ;
    ReadTriangleData(A , B , C);
    PrintResult(CircleAreaByATriangle(A , B , C));

    return 0 ;
}