/*
    
*/
#include <iostream>
using namespace std ;

int ReadNumber(string Message)
{
    int Number ;
    cout << Message;
    cin >> Number ;

    return Number ;
}

int SumNumbers()
{
    int Sum = 0 , Number = 0 , countr = 1 ;

    do{
        Number = ReadNumber("Please Enter Number to -99 "+ to_string(countr) + " ? \n");

        if(Number == -99)
        {
            break;
        }    
    Sum += Number;
    countr++ ;
    }while(Number != -99);
    
    return Sum ;
}

int main(){
    
    cout << endl << SumNumbers() ;
    return 0 ;
}