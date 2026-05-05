/*
    Calculate (Reactangle Area By Diagonal & Sied)
    a. 
*/

#include <iostream>
#include <math.h>
using namespace std ;

void ReadNumber(float& A , float& D)
{
    cout << "Enter The Sied Lenth Area A ? " <<endl;
    cin >> A ;
    
    cout << "Enter The Diagonal Area D ? " <<endl;
    cin >> D ;
}

float RectangalAreaBySiedAndDiagonal(float A , float D)
{
    int Area = A * sqrt(pow(D , 2) - pow(A , 2));
    return Area ;
}

void PrintResult(float Area)
{
    cout << "Area Rectangle = " << Area <<endl;
}

int main(){
    
    float A , D ;
    ReadNumber(A , D);
    PrintResult(RectangalAreaBySiedAndDiagonal(A , D));
    
    return 0;
}  