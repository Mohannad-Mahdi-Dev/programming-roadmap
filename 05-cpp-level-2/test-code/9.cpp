#include <iostream>
using namespace std ;

int ReadPositiveNumber(string Message)
{
    int Number ;
    do{
        cout << Message <<endl;
        cin >> Number ;
    
    
    }while(Number < 0);

    return Number ;
}

int CountDigitFrequency(short CheckDigit , int Number)
{
    int Freq = 0 ;
    int Reminder = 0 ;

    while(Number > 0)
    {
        Reminder = Number % 10 ;

        if(CheckDigit == Reminder)
        {
            Freq ++;
        }
        
        Number = Number / 10 ;
    }
    
    return Freq ;
}

void CountAllDigitFrequency(int Number)
{

    for(int count = 0 ; count < 10 ; count++)
    {
        int DigitFrequency = 0;

        DigitFrequency = CountDigitFrequency(count , Number);

        if(DigitFrequency > 0)
        {
            cout << " Digit " << count << " Frequency is " << DigitFrequency << " time(s)."<<endl;
        }
    }
}
int main(){

    int Number = ReadPositiveNumber("Please Enter a Number ? ") ;

    CountAllDigitFrequency(Number);

    return 0 ;
}