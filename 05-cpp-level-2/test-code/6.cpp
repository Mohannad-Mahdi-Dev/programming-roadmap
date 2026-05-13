#include <iostream>
using namespace std ;

int ReadPositiveNumber(const string& Message)
{
    int Number = 0 ;

    do{
        cout << Message <<endl;
        cin >> Number ;

    }while(Number < 0 );

    return Number ;
}

int SumDigits (int Number)
{
    
    int Sum = 0 ;
    int Digit = 0 ;
    
    while (Number > 0)
    {
        Digit = Number % 10 ;
        Sum = Sum + Digit ;
        Number /= 10 ;
    }

    return Sum ;
}

int main(){

    int Number = ReadPositiveNumber("Enter a Positive Number : ");

    cout<< " Sum of Digits = " << SumDigits(Number);
}