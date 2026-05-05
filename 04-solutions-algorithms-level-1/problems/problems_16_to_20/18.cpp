/*
    Calculate the (Circle Area).
    const PI = 3.141592653589793238;
*/
#include <iostream>
#include <math.h>
using namespace std ;

float ReadRadious(){

    float R ;
    cout << "Enter Radious R ? " <<endl;
    cin >> R ;

    return R ;
}

float CircleArea(float R){

    const float PI = 3.141592653589793238;
    float Area = PI * pow(R , 2) ;

    return Area ;
}

void PrintResult(float Area){

    cout << "Circle Area = " << Area <<endl;
}
int main(){
 
    PrintResult(CircleArea(ReadRadious()));
}