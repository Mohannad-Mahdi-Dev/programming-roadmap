#include <iostream>
using namespace std; 

int ReadPositiveNumber ()
{
    int Number ;

    do{
        cout << "Enter a Positive Number : "<<endl;
        cin >> Number ;
    }while(Number < 0);

    return Number ;
}

int ReverseNumbers(int Number )
{
    int Digit = 0 ;
    int Reverse = 0;

    while (Number > 0)
    {
        Digit = Number % 10 ; // 4

        Reverse = Reverse * 10 + Digit ;   // 4 * 10 + 3 ;
    
        Number = Number / 10 ; // clear last number 

        
    }
    
    return Reverse ;
}

int main()
{
    int Number = ReadPositiveNumber();

    cout << " Reverse is : \n" << ReverseNumbers(Number) ;
}