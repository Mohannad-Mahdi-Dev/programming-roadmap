/*
    Problem:
    Write a program to read a number and check if it is a prime number or not.
    Note: Prime number can only divide on one and on itself.
    Input
    5
    6
    3
    Outputs
    Prime
    Not Prime
    Prime
*/
//  Want Exapline from Ai
#include <iostream>
#include <math.h>
using namespace std ;

enum enPrimeNotPrime { Prime = 1 , NotPrime = 2 };

float ReadNumbers( string Message)
{
    float Number = 0 ;
    do{
        cout << Message <<endl;
        cin >> Number ;
    
    }while(Number <= 0 );

    return Number ;
}

enPrimeNotPrime CheckPrime(int Number)
{
   float M = round(Number / 2);
   
   for(int counter = 2 ; counter <= M ; counter++ )
   {
        if(Number % counter == 0) 
        {
           return enPrimeNotPrime::NotPrime ;
        }
    return enPrimeNotPrime::Prime ; 
   }
}

void PrintNumberType(int Number )
{
    switch (CheckPrime(Number))
    {
    case enPrimeNotPrime::Prime :
        cout << "The Number is Prime \n";
    break;
    case enPrimeNotPrime::NotPrime :
        cout << "The Number is Not Prime \n";
    break;
    default:
        break;
    }
}

int main(){
    
    PrintNumberType(ReadNumbers("Please Enter a Positive Number ? "));
}