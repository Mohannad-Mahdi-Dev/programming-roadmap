/*
    Calculate (Circle Area Inscribed in a Square)
    wirte a program to calculate Circle area inscribed in a square , than print it on the screen .

*/
#include <iostream>
#include <math.h>
using namespace std ;

float ReadSquareSide(){

    float A ;
    cout << "Enter squaere side A ? " <<endl;
    cin >> A ;

    return A ;
}

float CircleAreaInscribedInSquare(float A){

    const float PI = 3.141592653589793238;
    // float Area = PI * (pow(A , 2) / 2) ;    
    float Area = (PI * pow(A , 2)) / 4;

    return Area ;
}

void PrintResult(float Area){

    cout << "Circle Area = " << Area <<endl;
}
int main(){
 
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
}