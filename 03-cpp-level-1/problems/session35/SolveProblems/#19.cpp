#include <iostream>
#include <cmath>
using namespace std;

float calculateCircleArea(float d)
{
    float Area =( M_PI * d * d ) / 4 ;

    return Area;
}

int main(){

    float d ;

    cin >> d ;
    float Area = calculateCircleArea(d);

    cout << Area <<endl;
}