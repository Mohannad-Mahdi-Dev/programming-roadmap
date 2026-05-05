#include <iostream>
#include <cmath>
using namespace std;

double CalculateCircleArea(double a , double b)
{
    double Area = (M_PI * b * b / 4) * ((2* a - b) / (2* a + b));

    return Area ;
}

int main(){

    double a , b ;
    
    cin >> a >> b ;

    cout << CalculateCircleArea( a , b) << endl;
    
}