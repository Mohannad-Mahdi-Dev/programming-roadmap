/*
    Factorial of N 
*/
#include <iostream>
using namespace std ;

int ReadPositiveNumber(string Message)
{
    int Number;

    do{

    cout << Message <<"\n";
    cin >> Number ;
    
    }while(Number < 0);
    
    return Number ;
}

int FactorialNumber(int Number)
{
// Trace
/*
----------------------------
    Countr - Factorial 
----------------------------
    7        1
    6        6
    5        30
    4        120
    3        360
    2        720
    1        720
--------------------------------
*/
    int Factorial = 1 ;

    for(int countr = Number ; countr > 1 ; countr-- )
    {
        Factorial *= countr ;
    }
    return Factorial ;
}

int main(){
    
    cout << FactorialNumber(ReadPositiveNumber("Enter N! ?"));
    
    return 0 ;
}