#include <iostream>
#include <cmath>
using namespace std;

double  CaluclateCircleArea(double L)
{
    double Area = (L * L ) / (4 * M_PI);

    return Area ;
}

int main(){

    double L;

    cin >> L ;

    cout << CaluclateCircleArea(L) <<endl;
    
}