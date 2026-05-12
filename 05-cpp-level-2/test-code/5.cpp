#include <iostream>
using namespace std ;

int ReadPositiveNumber(const string& Message )
{
    int Number ;

    do
    {
        cout << Message <<endl;
        cin >> Number ;

    } while (Number <= 0);
    
    return Number ;
}

void PrintDigitsInReversedOrder(int Number)
{
    float Digit = 0 ;

    while(Number > 0)
    {
        Digit =  Number % 10 ;

        cout << Digit <<endl;
        
        Number /=  10 ;
        
    }
}

int main(){

    int Number = ReadPositiveNumber("Please Enter a positive number : ");

    PrintDigitsInReversedOrder(Number);

    return 0 ;
}