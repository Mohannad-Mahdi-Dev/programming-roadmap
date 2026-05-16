#include <iostream>
using namespace std ;

void ReadDigitAndNumber(string Message , int& Digit , short& Number)
{

    do{
        cout << Message <<endl;
        cin >> Digit ;
        cout << Message <<endl;
        cin >> Number ;
    
    }while(Number < 0);

}

void PrintDigitFrequency(int Digit , int Number)
{
    int Sum = 0 ;
    int Reminder = 0 ;
    while(Digit > 0)
    {
        Reminder = Digit % 10 ;

        if(Reminder == Number)
        {
            Sum += 1 ;
        }
        
        Digit = Digit / 10 ;
    }

    cout << "\n Digit " << Number << " Frequency is ("<<  Sum <<") Time(S)." <<endl;
}

int main(){

    int Digit ;
    short Number ;

    ReadDigitAndNumber("Please Enter a Digit and Number ? " , Digit , Number) ;
    PrintDigitFrequency(Digit , Number);

    return 0 ;
}