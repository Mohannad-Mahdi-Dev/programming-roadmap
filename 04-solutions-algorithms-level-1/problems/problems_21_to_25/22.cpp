/*
    Write a program to calculate circle area Inscribed in an Isosceles triangle, 
    than print it on the screen.
*/
#include <iostream>
#include <math.h>
using namespace std ;

void ReadTriangleData(float& A , float& B)
{
    cout << "Enter Triangle side A ? \n";
    cin >> A ;

    cout << "Enter Triangle base B ? \n";
    cin >> B ;
}

float CircleAreaByIsoscelesTriangle(float A , float B)
{
    const float PI = 3.141592653589793238;
    float Area = PI * (pow(B , 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area ;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area <<endl;
}
int main()
{
    float A , B ;
    ReadTriangleData(A , B);
    PrintResult(CircleAreaByIsoscelesTriangle(A , B));

    return 0 ;
}