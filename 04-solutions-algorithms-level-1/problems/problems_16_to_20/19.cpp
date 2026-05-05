/*
Wite a program to calculate circle area through diameter , than print it on the screen .    const PI = 3.141592653589793238;
*/
#include <iostream>
#include <math.h>
using namespace std ;

float ReadDiameter(){

    float D ;
    cout << "Enter Radious D ? " <<endl;
    cin >> D ;

    return D ;
}

float CircleAreaByDiameter(float D){

    const float PI = 3.141592653589793238;
    float Area = (PI * pow(D , 2)) / 4 ;

    return Area ;
}

void PrintResult(float Area){

    cout << "Circle Area = " << Area <<endl;
}
int main(){
 
    PrintResult(CircleAreaByDiameter(ReadDiameter()));
}