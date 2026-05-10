/*
Problem :
    Write a Program to check if the number is Prefect or not Prefect?
    Note : Prefect Number = Sum (all divisors)

    28 = 1 + 2 + 4 + 14
    6 = 1 + 2 + 3 

    Input :
    28 is perfect.
    12 is not prefect
*/
#include <iostream>
using namespace std ;

int ReadPositiveNumber(string Message)
{
    int number ;
    do{
        cout << Message <<endl;
        cin >> number ;
        
    }while (number <= 0);
    
    return number ;
}


bool CheckPerfectNumber(int Number)
{
    int sum = 0 ;

    for(int i = 1 ; i < Number ; i++ )
    {
        if(Number % i == 0)
        {
            sum += i ;
        }
    }

    int perfect = Number == sum ;
    return perfect ;
}

void PrintResult(int number)
{
    if(CheckPerfectNumber(number))
    {
        cout << "is Perfect Number .\n";
    }else {
        cout << " is Not Prefect Number . \n";
    }
}
 
 
int main() {

    PrintResult(ReadPositiveNumber("Please Enter a Number Perfect "));

    return 0 ;
}