#include <iostream>
#include <cmath>
using namespace std;

double CalculateCircleArea(double a , double b , double c)
{
    float p = (a + b + c) / 2 ;
    double T = (a * b * c) / (4* sqrt(p*(p - a)*(p - b)*(p - c))) ;

      T *= T ;

     double Area = M_PI * T ; 

     return Area ;
}

int main(){

    double a , b , c ;

    cin >> a ;
    cin >> b ;
    cin >> c ;

    cout << CalculateCircleArea(a , b, c) << endl;

}