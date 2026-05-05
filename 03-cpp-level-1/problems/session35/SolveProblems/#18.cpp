#include <iostream>
#include <cmath>
using namespace std;

double calculateCircleArea(double r)
{
    
    double Area = M_PI * (r * r);

    return Area ; 
}


int main(){

    double r ;
    
    cin >> r ;
    double Area = calculateCircleArea(r); 

    cout << Area <<endl;
}