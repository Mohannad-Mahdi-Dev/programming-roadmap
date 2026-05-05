#include <iostream>
#include <cmath>
using namespace std;

double PowerFunction(double Number , double M)
{
    double Result = pow(Number , M);

    return Result ;
}

int main(){

    double Number , M ;

    cout << "Please Enter The Number : " <<endl;
    cin >> Number ;
    
    cout << "Please Enter The Number power M : " <<endl;
    cin >> M ;

    cout << PowerFunction(Number, M) <<endl;
}